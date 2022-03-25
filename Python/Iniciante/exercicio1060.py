numero_1 = float(input(""))
numero_2 = float(input(""))
numero_3 = float(input(""))
numero_4 = float(input(""))
numero_5 = float(input(""))
numero_6 = float(input(""))

lista = [numero_1, numero_2, numero_3, numero_4, numero_5, numero_6]

fator = 0
total = len(lista)
valores_positivos = 0

while fator < total:
    if lista[fator] > 0:
        valores_positivos = valores_positivos + 1
    fator = fator + 1

print("{} valores positivos".format(valores_positivos))