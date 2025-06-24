from .inimigo import Inimigo

class Chefe(Inimigo):
    def __init__(self, nome:str, dano:int):
        super().__init__(nome, dano)

    def atacar(self):
        return super().atacar()
    
    def ataque_especial(self):
        dano_total = self.dano + 43
        print(f"{self.nome} uso seu ataque especial causando {dano_total}!")

    def status(self):
        print(f"Nome:{self.nome} | Dano:{self.dano}")