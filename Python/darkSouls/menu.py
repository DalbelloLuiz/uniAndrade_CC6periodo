from jogadores import Cavaleiro
from inimigos import Chefe, Morto_vivo
from itens import Arma
from npcs import Ferreiro

def iniciar_jogo():
    cavaleiro = Cavaleiro(nome="Abner", dano=15, armadura=20, resistencia=10)
    chefe = Chefe(nome="Mahito", dano=40)
    morto_vivo = Morto_vivo(nome="Herobrine", dano=10, podridao=30, velocidade=2.5)
    arma = Arma(nome="Laminas do caos", tipo="Lâmina", dano=23, resistencia=100)
    ferreiro = Ferreiro(nome="Eorlund", dialogo="Saudações estranho", amizade=99, inventario=30, metal="ouro")

    while True:
        print("\nEscolha uma ação:")
        print("1 - Atacar")
        print("2 - Olhar ao redor")
        print("3 - Falar com o ferreiro")
        print("4 - Status")
        print("0 - Sair")

        escolha = input("Digite o número da ação: ")

        if escolha == "1":
            arma.usar()
        elif escolha == "2":
            print("Você olha ao redor e vê:")
            chefe.status()
            morto_vivo.status()
        elif escolha == "3":
            ferreiro.falar()
            ferreiro.vender_item()
        elif escolha == "4":
            cavaleiro.status()
        elif escolha == "0":
            print("Saindo do jogo...")
            break
        else:
            print("Opção inválida.")
