class Npc():
    def __init__(self, nome:str ,dialogo:str, amizade:int):
        self.nome = nome
        self.dialogo = dialogo
        self.amizade = amizade

    def falar(self):
        print(f"{self.nome} diz: {self.dialogo}")