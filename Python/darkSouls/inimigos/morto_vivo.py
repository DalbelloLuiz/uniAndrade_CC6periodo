from .inimigo import Inimigo

class Morto_vivo(Inimigo):
    def __init__(self, nome:str, dano:int, podridao:int, velocidade:float):
        super().__init__(nome, dano)
        self.podridao = podridao
        self.velocidade = velocidade

    def atacar(self):
        return super().atacar()
    
    def morder(self):
        print(f"{self.nome} mordeu causando {self.podridao} de podridão!")

    def status(self):
        print(f"Nome:{self.nome} | Dano:{self.dano} | Podridão: {self.podridao} | Velocidade:{self.velocidade}")