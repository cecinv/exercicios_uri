lista_numeros = []

quantidade = 0

while quantidade < 6:
      numero = float(input(""))
      lista_numeros.append(numero)
      quantidade += 1

valores_positivos = 0
lista_positivos = []

for numero in lista_numeros:
      if numero > 0:
            valores_positivos += 1
            lista_positivos.append(numero)

somatorio = 0

for numero in lista_positivos:
      somatorio = somatorio + numero

media = somatorio / len(lista_positivos)


print("{} valores positivos".format(valores_positivos))
print("{:.1f}".format(media))
