x, y, z = [int(x) for x in input().split()]

lista_numeros = [x, y, z]
lista_crescente = sorted(lista_numeros)
# lista_decrescente = sorted(lista_numeros, reverse= True)


i = 0
for i in lista_crescente:
      print(i)
      i = i + 1

print("")

for i in lista_numeros:
      print(i)
      i = i + 1