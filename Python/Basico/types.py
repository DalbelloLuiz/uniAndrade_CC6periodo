class A:
    ...
class B:
    pass
class C(A,B):
    ...

idade: int = 32
salario: float = 35000.50
nome: str = "Julius"
casado: bool = True
dados: dict = {2,5,"ju",25,25,25}
array: list = [2,5,"ju",25,25,25]
tupla: tuple = (2,5,25,25)
unico: set = {2,5,"ju",25,25,25}

#print(unico)
#print(nome.upper) #Método builtin
#print(vars(C)) # Imprime class com dict
#help(C) # Ajuda ver internamente
nome: str = 'Ana Paula'
eh_casado: bool = True
pessoa: A = A() #Tipo personalizado
A.nome = "maria" #Atribuição direto na classe
A.cargo = "diretor"

print(A.__dict__) # Armazenar valores da class