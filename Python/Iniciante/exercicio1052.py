numero_dado = int(input(""))

while numero_dado > 12 or numero_dado < 1:
    numero_dado = int(input(""))

meses = ["January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"]
#provavelmente era melhor usar um tuple que uma lista, pois imutável

fator = 0
total = len(meses)

print(meses[numero_dado - 1])

