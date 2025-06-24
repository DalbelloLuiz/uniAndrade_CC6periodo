from .item import Item

class Arma(Item):
    def __init__(self, nome:str, tipo:str ,dano:int, resistencia:int):
        super().__init__(nome, tipo)
        self.dano = dano
        self.resistencia = resistencia

    def usar(self):
        print(f"Usou a {self.nome} e causou {self.dano} de dano!")