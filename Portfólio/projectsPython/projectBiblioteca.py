# Sistema de Biblioteca

biblioteca = [] #Lista para armazenar os livros

def cadastrar_livro():
    titulo = input("Titulo do livro: ")
    autor = input("Autor do livro: ")
    ano = int(input("Ana da publicacao: "))

    livro = {
        "titulo": titulo,
        "autor": autor,
        "ano": ano,
        "disponivel": True
    }
    biblioteca.append(livro)
    print(f'📚 Livro"{titulo}" castrado com sucesso!')

def listar_livros():
    if not biblioteca:
        print("Nenhum livro foi cadastrado.")
        return
    for i, livro in enumerate(biblioteca):
        status = "Disponivel" if livro["disponivel"] else "Indisponivel"
        print(f'{i+1}. {livro["titulo"]} - {livro["autor"]} ({ livro["ano"] }) - {status}')

def emprestar_livro():
    listar_livros()
    escolha = int(input("Digite o número do livro para emprestar: ")) - 1
    if 0 <= escolha < len(biblioteca):
        if biblioteca[escolha]["disponivel"]:
            biblioteca[escolha]["disponivel"] = False
            print(f'✅ Você emprestou "{biblioteca[escolha]["titulo"]}".')
        else:
            print("⚠️ Esse livro já está disponível.")
    else:
        print("Opção inválida.")

def devolver_livro():
    listar_livros()
    escolha = int(input("Digite o número do livro para devolver: ")) - 1
    if 0 <= escolha < len(biblioteca):
        if biblioteca[escolha]["disponivel"]:
            biblioteca[escolha]["disponivel"] = True
            print(f'🔄 Você devolveu {biblioteca[escolha]["titulo"]}.')
        else:
            print("⚠️ Esse livro já está disponível.")
    else:
        print("Opção inválida.")

# Menu do sistema

while True:
    print("\n=== Sistema de Biblioteca ===")
    print("1 - Cadastrar livro")
    print("2 - Listar livros")
    print("3 - Emprestar livro")
    print("4 - Devolver livro")
    print("5 - Sair")
    opcao = input("Escolha uma opcao: ")

    if opcao == "1":
        cadastrar_livro()
    elif opcao == "2":
        listar_livros()
    elif opcao == "3":
        emprestar_livro()
    elif opcao == "4":
        devolver_livro()
    elif opcao == "5":
        print("Saindo...")
        break
    else:
        print("⚠️ Opção inválida.")

