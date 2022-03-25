x, y, z = [int(x) for x in input().split()]

lista_numeros = [x, y, z]
lista_crescente = sorted(lista_numeros)
# lista_decrescente = sorted(lista_numeros, reverse= True)

print("{}\n"
      "{}\n"
      "{}\n"
      "\n"
      "{}\n"
      "{}\n"
      "{}".format(lista_crescente[0], lista_crescente[1], lista_crescente[2],
                    lista_numeros[0], lista_numeros[1], lista_numeros[2]))
