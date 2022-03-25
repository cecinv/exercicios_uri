numero_testes = int(input(""))

lista_testados = []

while numero_testes > 0:
    lista_testados.append(int(input("")))
    numero_testes -= 1

in_v = 0
out_v = 0

for numero in lista_testados:
    if numero >= 10 and numero <= 20:
        in_v += 1
    else:
        out_v += 1

print("{} in".format(in_v))
print("{} out".format(out_v))