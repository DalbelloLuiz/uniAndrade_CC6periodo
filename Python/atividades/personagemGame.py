import random

class PersonagemGame:
    def __init__(self,nome,hp,forca,itens):
        self.nome = nome
        self.hp = hp
        self.forca = forca
        self.itens = itens

    def exibirStatus(self):
        print("-------------------------------")
        print(f"Nome: {self.nome}")
        print(f"Pontos de vida: {self.hp}")
        print(f"Força: {self.forca}")
        print("-------------Itens-------------")
        for i in self.itens:
            print(i)
        print("-------------------------------")

    def treinarForca(self):
        numero1 = random.randint(1,10)
        numero2 = random.randint(1,10)
        print("Para melhorar sua força acerte a soma")
        resultado = int(input(f"{numero1} + {numero2} = "))
        if resultado == (numero1 + numero2):
            self.forca += 50
            print("Correto sua força aumentou em 50 pontos!")
        else:
            print("Incorreto sua força não aumentou!")

mago = PersonagemGame("Dumbledore", 100, 200, ["Varinha das varinhas","Pedra Filosofal"])
berserk = PersonagemGame("Guts", 500, 1000, ["Dragon Slayer","Armadura Berserker", "Braço Canhão"])
berserk.exibirStatus()
berserk.treinarForca()
berserk.exibirStatus()