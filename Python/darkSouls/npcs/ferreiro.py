from .npc import Npc

class Ferreiro(Npc):
    def __init__(self, nome:str, dialogo:str, amizade:str, inventario:int, metal:str):
        super().__init__(nome, dialogo, amizade)
        self.inventario = inventario
        self.metal = metal

    def falar(self):
        return super().falar()

    def vender_item(self):
        print(f"O ferreiro {self.nome} vendeu {self.inventario} peça(s) de {self.metal}!")