class Player:
    host = "localhost:8080" # Global
    # Inicializador do objeto
    # Passando valores posicionais
    def __init__(self, nome, arma):
        self.nome = nome # autoriza modificação/objeto
        self.arma = arma

kratos : Player = Player('Kratos','Laminas do caos')
naruto: Player = Player('Naruto', 'Kunai')

print(naruto.nome, naruto.arma)
print(naruto.host)