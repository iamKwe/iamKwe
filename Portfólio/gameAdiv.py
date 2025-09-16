import random

numero_secreto = random.randint(1,100)

tentativas = 0
acertou = False

while not acertou:
    chute = int(input("Digite um numero entre 1 e 100: "))
    tentativas += 1

    if chute == numero_secreto:
        print("Parabéns! Voce acertou em {} tentativas".format (tentativas))

        acertou = True

    elif chute < numero_secreto:
        print("O número secreto é maior!")

    else:
        print("O número secreto é menor!")