class Personagem:
    def __init__(self, nome):
        self.nome = nome
        self.saude = 100
        self.vivo = True
       
    def status(self):
        print(f"Nome: {self.nome} | Saúde {self.saude}")
       
    def usarPocao(self, pocao):
       if not self.vivo:
           print(f"{self.nome} foi de Vasco impossível usar poções 😕")
           return
       
       nova_saude = self.saude
       nova_saude += pocao.potencia
       
       if nova_saude <= 0:
           self.vivo = False
           self.saude = 0        
           print(f"A saúde de {self.nome} acabou e infelizmente ele(a) nos deixou 🙏")
           return
       
       if nova_saude >= 100:
           self.saude = 100
           print("A saúde está já 100%, chega de Poções!")
           return

       self.saude = nova_saude
       print(f"{self.nome} usou a Poção de {pocao.tipo}")
       self.status()      
       
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
    
    
    
       
p1 = Personagem("Chiquinha")

pocaoVerde = PocaoVerde("Cura", +15)
pocaoRoxa = PocaoRoxa("Dano", -25)

faca = Item("Faca", 25)
inventario = Inventario()
inventario.adicionar_item(faca)
inventario.adicionar_item(faca)
<<<<<<< HEAD
inventario.listar_itens()
=======
inventario.listar_itens()
>>>>>>> 01890358b5297a26f11fa4d85fc4a49d10e0bb66
