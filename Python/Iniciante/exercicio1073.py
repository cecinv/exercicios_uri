numero = int(input(""))

if numero < 5 or numero > 2000:
    numero = int(input(""))

par = 1

while par <= numero:
    if par % 2 == 0:
        numero_quadrado = par ** 2
        print("{}^2 = {}".format(par, numero_quadrado))
    par += 1
