class Personagem:
    def __init__(self, nome):
        self.nome = nome
        self.saude = 15
        self.vivo = True
        self.inventario = Inventario()

#Adicionar função para usar a poção

    def usar_pocaoVerde(self, pocao):
        if self.vivo == True:
            self.saude += pocao.potencia
            print(f"Personagem {self.nome} usou poção de {pocao.tipo}")
            print(f"Curou: {pocao.potencia} | Saúde Atual: {self.saude}")
        else:
            print(f"{self.nome} foi de Vasco impossível usar poções 😕")
       
    def usar_pocaoRoxa(self, pocao):
        if self.vivo == True:
            self.saude -= pocao.potencia
            if self.saude > 0:
                print(f"Personagem {self.nome} usou poção de {pocao.tipo}")
                print(f"Dano: {pocao.potencia} | Saúde: {self.saude}")    
            else:
                self.saude = 0
                self.vivo = False
                print(f"A saúde de {self.nome} acabou e infelizmente ele(a) nos deixou 🙏")
        else:
            print(f"Para de chutar cachorro morto! {self.nome} já foi de arrasta 😭")
       
class PocaoVerde:
    def __init__(self, tipo, potencia):
        self.tipo = tipo
        self.potencia = potencia
       
class PocaoRoxa:
    def __init__(self, tipo, potencia):
        self.tipo = tipo
        self.potencia = potencia
       
class Item:
    def __init__(self, tipo: str, efeito: int):
        self.tipo = tipo
        self.efeito = efeito

class Inventario:
    def __init__(self):
        self.itens = []

    def adicionar_item (self, item: Item):
        if not item:
            print("Escolha um item para adicionar ao inventário")
        else:
            self.itens.append(item)
            print(f"Item {item.tipo} adicionado ao inventário")

    def listar_itens(self):
        if not self.itens:
            print("Inventário vazio")
        else:
            print("Itens no inventário:")
            for item in self.itens:
                print(f"- {item.tipo} (Efeito: {item.efeito})")


# Testando
p1 = Personagem("Chiquinha")

pocaoVerde = PocaoVerde("Cura", 15)
pocaoRoxa = PocaoRoxa("Dano", 15)

faca = Item("Faca Cortante", 120)
inventario = Inventario()
inventario.adicionar_item(faca)
inventario.adicionar_item(faca)
inventario.listar_itens()
#p1.usar_pocaoRoxa(pocaoRoxa)
#p1.usar_pocaoVerde(pocaoVerde)
#p1.usar_pocaoRoxa(pocaoRoxa)