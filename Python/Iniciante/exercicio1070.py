numero = int(input(""))

quantidade_impresso = 0

while quantidade_impresso < 6:
    if numero % 2 != 0:
        print(numero)
        quantidade_impresso += 1
    numero += 1