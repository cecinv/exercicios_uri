ddd_solicitado = int(input(""))

ddd = [[61, "Brasilia"], [71, "Salvador"], [11, "Sao Paulo"], [21, "Rio de Janeiro"],
       [32, "Juiz de Fora"], [19, "Campinas"], [27, "Vitoria"], [31, "Belo Horizonte"]]

fator = 0
total = len(ddd)
achou = False

while fator < total and achou == False:
    if ddd_solicitado == ddd [fator][0]:
        print(ddd [fator][1])
        achou = True
    fator = fator + 1

if achou == False:
    print("DDD nao cadastrado")