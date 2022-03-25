valor_monetario = float(input(""))

#notas
numero_notas_100 = int(valor_monetario // 100)
valor_monetario = valor_monetario % 100
numero_notas_50 = int(valor_monetario // 50)
valor_monetario = valor_monetario % 50
numero_notas_20 = int(valor_monetario // 20)
valor_monetario = valor_monetario % 20
numero_notas_10 = int(valor_monetario // 10)
valor_monetario = valor_monetario % 10
numero_notas_5 = int(valor_monetario // 5)
valor_monetario = valor_monetario % 5
numero_notas_2 = int(valor_monetario // 2)
valor_monetario = valor_monetario % 2

#moedas
valor_monetario = round(valor_monetario, 2)
numero_moedas_1 = int(valor_monetario // 1)
valor_monetario = valor_monetario % 1

numero_moedas_50 = int(valor_monetario // 0.50)
valor_monetario = valor_monetario % 0.50
valor_monetario = round(valor_monetario, 2)

numero_moedas_25 = int(valor_monetario // 0.25)
valor_monetario = valor_monetario % 0.25
valor_monetario = round(valor_monetario, 2)

numero_moedas_10 = int(valor_monetario // 0.10)
valor_monetario = valor_monetario % 0.10
valor_monetario = round(valor_monetario, 2)

numero_moedas_5 = int(valor_monetario // 0.05)
valor_monetario = valor_monetario % 0.05
valor_monetario = round(valor_monetario, 2)
numero_moedas_01 = int(valor_monetario * 100)


print("NOTAS:\n"
      "{} nota(s) de R$ 100.00\n" \
      "{} nota(s) de R$ 50.00\n" \
      "{} nota(s) de R$ 20.00\n" \
      "{} nota(s) de R$ 10.00\n" \
      "{} nota(s) de R$ 5.00\n" \
      "{} nota(s) de R$ 2.00\n" \
      "MOEDAS:\n"
      "{} moeda(s) de R$ 1.00\n"
      "{} moeda(s) de R$ 0.50\n"
      "{} moeda(s) de R$ 0.25\n"
      "{} moeda(s) de R$ 0.10\n"
      "{} moeda(s) de R$ 0.05\n"
      "{} moeda(s) de R$ 0.01".format(numero_notas_100, numero_notas_50, numero_notas_20, numero_notas_10, numero_notas_5, numero_notas_2,
                                      numero_moedas_1, numero_moedas_50, numero_moedas_25, numero_moedas_10, numero_moedas_5, numero_moedas_01))
