lista_numeros = []

quantidade = 0

while quantidade < 5:
    numero = int(input(""))
    lista_numeros.append(numero)
    quantidade += 1

valores_pares = 0

for numero in lista_numeros:
    if numero % 2 == 0:
        valores_pares += 1

print("{} valores pares".format(valores_pares))