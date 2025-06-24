class Jogador:

    def __init__(self, nome:str, dano:int):
        self.nome = nome
        self.dano = dano
        self.saude = 100

    def get_saude(self):
        return self.saude
    
    def set_saude(self, valor:int):
        self.saude = max(0, min(100, self.saude + valor))

    def atacar(self):
        print(f"{self.nome} atacou e causou {self.dano} de dano!")

    def defender(self, dano:int):
        print(f"{self.nome} defendeu {dano} de dano!")