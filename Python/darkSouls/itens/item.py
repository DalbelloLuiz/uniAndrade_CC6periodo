class Item:
    
    def __init__(self, nome:str, tipo:str):
        self.nome = nome
        self.tipo = tipo

    def usar(self):
        print(f"Uso o item {self.nome} do tipo {self.tipo}")