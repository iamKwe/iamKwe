import senhaGerador

usuarios = {
    "admin": "admin123"
}

def registrar_usuario():

    print("\n--- Registrar Novo Usuario ---")

    username = input("Informe o Username: ")

    if username in usuarios:
        print("Este username já existe. Tente outro.")
    else:
        print("Username cadastrado com sucesso.")
        print("\nDeseja criar a própria senha ou deseja criar uma aleatória?")
        print("1 - Senha própria")
        print("2 - Senha aleatória")

        escolha = input("> ")

        if escolha == "1":

            senha1 = input("\nDigite a senha: ")
            senha2 = input("\nConfirme a senha: ")
            senha = senha2

            if senha1 != senha2:
                print("Senhas divergentes. Tente novamente.")

            else:
                usuarios[username] = senha
                print("Usuario cadastrado com sucesso.")

        elif escolha == "2":
            senha_aleatoria = senhaGerador.gerar_senha()
            usuarios[username] = senha_aleatoria

            print(f"Sua senha é: {senha_aleatoria}")


def login_sistema():

    print("\n--- Login ---")

    username = input("\nInforme o Username: ")
    senha_digitada = input("\nDigite a senha: ")

    if (username not in usuarios) or usuarios[username] != senha_digitada:
        print("\nUsuário ou senha incorretos. Tente novamente.")
    else:
        print(f"\nAcesso liberado. Bem-vindo {username}!")

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
            print(f"\nCadastros salvos: {usuarios}")
        elif escolha == "4":
            print("\nSaindo...")
            break
        else:
            print("Opcao invalida. Tente novamente.")


if __name__ == "__main__":
    menu_principal()







