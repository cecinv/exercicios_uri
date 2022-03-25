lista_numeros = []
quantidade = 5

while quantidade > 0:
    lista_numeros.append(int(input("")))
    quantidade -= 1

valores_pares = 0
valores_impares = 0

valores_positivos = 0
valores_negativos = 0

for numero in lista_numeros:
    if numero % 2 == 0:
        valores_pares += 1
    if numero % 2 != 0:
        valores_impares += 1
    if numero > 0:
        valores_positivos += 1
    if numero < 0:
        valores_negativos += 1

print("{} valor(es) par(es)".format(valores_pares))
print("{} valor(es) impar(es)".format(valores_impares))
print("{} valor(es) positivo(s)".format(valores_positivos))
print("{} valor(es) negativo(s)".format(valores_negativos))
