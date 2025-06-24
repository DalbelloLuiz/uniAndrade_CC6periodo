class Inimigo():
    def __init__(self, nome:str, dano:int):
        self.nome = nome
        self.dano = dano

    def atacar(self):
        print(f"{self.nome} atacou causando {self.dano} de dano!")        