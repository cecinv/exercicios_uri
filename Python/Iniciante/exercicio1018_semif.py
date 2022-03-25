numero_inicial = int(input(""))
numero = numero_inicial

numero_notas_100 = numero // 100
numero = numero % 100

numero_notas_50 = numero // 50
numero = numero % 50

numero_notas_20 = numero // 20
numero = numero % 20

numero_notas_10 = numero // 10
numero = numero % 10

numero_notas_5 = numero // 5
numero = numero % 5

numero_notas_2 = numero // 2
numero = numero % 2

numero_notas_1 = numero // 1
numero = numero % 1

print("{}\n"
      "{} nota(s) de R$ 100,00\n" \
      "{} nota(s) de R$ 50,00\n" \
      "{} nota(s) de R$ 20,00\n" \
      "{} nota(s) de R$ 10,00\n" \
      "{} nota(s) de R$ 5,00\n" \
      "{} nota(s) de R$ 2,00\n" \
      "{} nota(s) de R$ 1,00".format(numero_inicial, numero_notas_100, numero_notas_50, numero_notas_20, numero_notas_10, numero_notas_5, numero_notas_2, numero_notas_1))
