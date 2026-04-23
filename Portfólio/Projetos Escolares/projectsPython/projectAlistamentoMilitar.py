from datetime import date


atual = date.today().year

while True:
    print("=== Consultar Alistamento ===")
    print("                             ")
    print("1. Consultar prazo de alistamento.")
    print("2. Sair do Sistema.")
    print("=============================")
    opcao = int(input())

    if opcao == 1:
        nasc = int(input("Ano de nascimento: "))
        conf = str(input("Já se alistou? "))
        idade = atual - nasc

        if idade == 18:
            print("Voce precisa se alistar este ano!")
        elif idade < 18:
            saldo = 18 - idade
            print(f"Voce terá que se alistar em {saldo} anos!")
        elif idade > 18:
            saldo = idade - 18
            if conf == "sim" or conf == "Sim":
                print(f"Voce já se alistou!")
            else:
                print(f"Voce deveria ter se alistado há {saldo} anos!")

        else:
            print("Erro. Tente novamente.")
        print("                    \n")