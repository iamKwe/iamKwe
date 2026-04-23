import random

# Sistema do jogo

def iniciarJogo():

    while True:
        itens = ('PEDRA', 'PAPEL', 'TESOURA')

        escolhaComputador = random.choice(itens)

        print("Escolha entre [PEDRA|PAPEL|TESOURA]")
        escolhaJogador = str(input("> ").upper())

        if escolhaJogador in itens:
            if escolhaComputador == escolhaJogador:
                print("Empatou!")
            elif (escolhaComputador == "PEDRA" and escolhaJogador == "PAPEL") or (escolhaComputador == "PAPEL" and escolhaJogador == "TESOURA") or (escolhaComputador == "TESOURA" and escolhaJogador == "PEDRA"):
                print("Voce ganhou!")
            elif (escolhaComputador == "PEDRA" and escolhaJogador == "TESOURA") or (escolhaComputador == "TESOURA" and escolhaJogador == "PAPEL") or (escolhaComputador == "PAPEL" and escolhaJogador == "PEDRA"):
                print("Voce perdeu!")

            print("Jogador: ", escolhaJogador)
            print("Computador: ", escolhaComputador)

        else:
            print("Opcao invalida!")
        break

# Regras do Jogo

def regrasJogo():
    print("Regra 1: Nao jogar a mesma mao, mais de 2 vezes seguidas.")
    print("Regra 2: Se divirta!")
    print("Regra 3: Nao xingue o adversário.")


# Menu do Jogo

while True:
    print("=== Bem-vindo ao Jo-Ken-Po ===")
    print("1. Iniciar Jogo")
    print("2. Regras")
    print("3. Sair")
    opcao = input("> ")

    if opcao == "1":
        iniciarJogo()

    elif opcao == "2":
        regrasJogo()

    elif opcao == "3":
        print("Saindo...")
        break
    else:
        print("Erro. Tente novamente.")
