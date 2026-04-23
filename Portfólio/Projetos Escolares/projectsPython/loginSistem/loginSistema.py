import senhaGerador
import hashlib
import os
import hmac

def cript_senha(senha):

    salt = os.urandom(16)

    hash_senha = hashlib.pbkdf2_hmac(
        'sha512',
        senha.encode('utf-8'),
        salt,
        100000
    )

    return salt, hash_senha

def verify_senha(senha_digitada, salt_armazenado, hash_armazenado):

    hash_novo = hashlib.pbkdf2_hmac(
        'sha512',
        senha_digitada.encode('utf-8'),
        salt_armazenado,
        100000
    )
    return hmac.compare_digest(hash_armazenado, hash_novo)

salt_admin, hash_admin = cript_senha('admin123')

usuarios = {
    "admin": {
        "salt": salt_admin,
        "hash": hash_admin,
    }
}


def registrar_usuario():

    print("\n--- Registrar Novo Usuario ---")

    username = input("Informe o Username: ")

    if username in usuarios:
        print("Este username já existe. Tente outro.")
        return

    print("Username cadastrado com sucesso.")
    print("\nDeseja criar a própria senha ou deseja criar uma aleatória?")
    print("1 - Senha própria")
    print("2 - Senha aleatória")

    escolha = input("> ")

    senha_final = None

    if escolha == "1":

        senha1 = input("\nDigite a senha: ")
        senha2 = input("\nConfirme a senha: ")

        if senha1 != senha2:
            print("Senhas divergentes. Tente novamente.")
            return
        else:
            senha_final = senha1

    elif escolha == "2":
        senha_aleatoria = senhaGerador.gerar_senha()
        print(f"Sua senha é: {senha_aleatoria}")
        senha_final = senha_aleatoria

    else:
        print("Opcao invalida. Tente novamente.")
        return

    if senha_final:
        salt, hash_senha = cript_senha(senha_final)

        usuarios[username] = {
            "salt": salt,
            "hash": hash_senha
        }
        print("\nUsuario criado com sucesso.")

def login_sistema():

    print("\n--- Login ---")

    username = input("\nInforme o Username: ")
    senha_digitada = input("\nDigite a senha: ")

    if username not in usuarios:
        print("\nUsuário ou senha incorretos. Tente novamente.")
        return

    dados_usuario = usuarios[username]
    salt_armazenado = usuarios[username]["salt"]
    hash_armazenado = usuarios[username]["hash"]

    if verify_senha(senha_digitada, salt_armazenado, hash_armazenado):
        print("\nLogado com sucesso.")
    else:
        print("\nUsuario ou senha incorretos. Tente novamente.")

def menu_principal():

    while True:
        print("\n--- Menu principal ---")
        print("1 - Login")
        print("2 - Registrar Usuario")
        print("3 - Consultar Cadastros")
        print("4 - Sair")
        escolha = input("> ")

        if escolha == "1":
            login_sistema()
        elif escolha == "2":
            registrar_usuario()
        elif escolha == "3":
            print(f"\nCadastros salvos: ")
            for user, data in usuarios.items():
                print(f"{user}: {data['salt'].hex()}, Hash: {data['hash'].hex()}")
        elif escolha == "4":
            print("\nSaindo...")
            break
        else:
            print("Opcao invalida. Tente novamente.")


if __name__ == "__main__":
    menu_principal()