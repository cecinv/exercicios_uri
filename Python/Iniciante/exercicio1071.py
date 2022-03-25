x = int(input(""))
y = int(input(""))

lista = [x, y]
lista = sorted(lista)
numero = lista[0]

if numero % 2 != 0:
    numero = numero + 1

lista_impares = []

while numero < lista[1]:
    if numero % 2 != 0:
        lista_impares.append(numero)
    numero += 1

total = sum(lista_impares)

print(total)