import requests

url_piada = "https://v2.jokeapi.dev/joke/Programming?blacklistFlags=nsfw,religious,political,racist,sexist,explicit&type=single&idRange=0-300"

try:
    resposta = requests.get(url_piada)
    resposta.raise_for_status()

    dados_piada = resposta.json()

    if 'joke' in dados_piada:
        print("=== Piada do dia ===")
        print(dados_piada['joke'])
    else:
        print("Nao foi possivel encontrar uma piada divertida.")

except requests.exceptions.RequestException as e:
    print(f"Erro ao buscar piada: {e}")

print("-" * 20)