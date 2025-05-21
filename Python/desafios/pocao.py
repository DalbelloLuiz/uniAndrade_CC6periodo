class Personagem:
    def __init__(self, nome):
        self.nome = nome
        self.saude = 15
        self.vivo = True
       
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
       
# Instancia Jogador
p1 = Personagem("Chiquinha")

pocaoVerde = PocaoVerde("Cura", 15)
pocaoRoxa = PocaoRoxa("Dano", 15)

#p1.usar_pocaoVerde(pocaoVerde)
p1.usar_pocaoRoxa(pocaoRoxa)
p1.usar_pocaoVerde(pocaoVerde)
p1.usar_pocaoRoxa(pocaoRoxa)