import random
import string

def gerar_senha(tamanho=12):

    letras_minusculas = string.ascii_lowercase
    letras_maiusculas = string.ascii_uppercase
    numeros = string.digits
    simbolos = string.punctuation

    if (tamanho < 4):
        print("Tamanho minimo é 4.")
        print("Tamanho padrao é 12.")
        tamanho = 12

    senha_lista = [
        random.choice(letras_minusculas),
        random.choice(letras_maiusculas),
        random.choice(numeros),
        random.choice(simbolos)
    ]

    todos_caracteres = letras_minusculas + letras_maiusculas + numeros + simbolos

    caracteres_restantes = tamanho - 4

    for _ in range(caracteres_restantes):
        senha_lista.append(random.choice(todos_caracteres))

        random.shuffle(senha_lista)

        senha_final = "".join(senha_lista)

        return senha_final


try:
    # Pede ao usuário o tamanho da senha
    tamanho_desejado = int(input("Qual o tamanho desejado para a senha? (Padrão é 12): ") or 12)

    # Gera a senha
    senha_nova = gerar_senha(tamanho_desejado)

    # Exibe a senha gerada
    print(f"\nSua nova senha segura é:")
    print(senha_nova)

except ValueError:
    print("Entrada inválida. Por favor, digite apenas um número.")
