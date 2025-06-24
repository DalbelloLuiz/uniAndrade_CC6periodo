from .jogador import Jogador

class Cavaleiro(Jogador):
    def __init__(self, nome:str, dano:int, armadura:int, resistencia:int):
        super().__init__(nome, dano)
        self.armadura = armadura
        self.resistencia = resistencia
        self.saude = 100

    def get_saude(self):
        return super().get_saude()
    
    def set_saude(self, valor):
        return super().set_saude(valor)
    
    def atacar(self):
        if self.saude != 0:
            dano_total = self.dano + 5
            print(f"{self.nome} atacou e causou {dano_total} de dano!")
        else:
            print("Você está morto impossível atacar!")

    def defender(self, dano):
        if self.saude != 0:
            dano_reduzido = max(0, dano - self.armadura)
            self.set_saude(-dano_reduzido)
            print(f"{self.nome} defendeu! Sofreu {dano_reduzido} de dano (após armadura).")
        else:
            print("Já está morto! Chega de atacar")

    def status(self):
        print(f"Nome:{self.nome} | Dano: {self.dano} | Armadura: {self.armadura} | Resistência: {self.resistencia}")