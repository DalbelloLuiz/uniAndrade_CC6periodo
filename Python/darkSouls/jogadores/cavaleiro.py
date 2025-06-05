from jogador import Jogador
class Cavaleiro(Jogador):
    def __init__(self,nome:str, dano:int):
        super().__init__(nome, dano)

    @property
    def saude(self):
        return self._saude
    
    @saude.setter
    def saude(self, valor):
        self._saude += max(0, valor)

    def atacar(self):
        print("Atacar Polimorfico")
        print(f"{self.nome} atacou!")

    def defender(self):
        print("Defendeu Polimorfico")
        print(f"{self.nome} defendeu!")

if __name__ == '__main__':
    cavaleiro = Cavaleiro("Rei Artur", 80)
    cavaleiro.atacar()