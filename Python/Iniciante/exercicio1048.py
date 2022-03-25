salario = float(input(""))

if salario > 0 and salario <= 400:
    novo_salario = salario * 1.15
    reajuste = novo_salario - salario
    percentual = "15 %"

elif salario > 400 and salario <= 800:
    novo_salario = salario * 1.12
    reajuste = novo_salario - salario
    percentual = "12 %"

elif salario > 800 and salario <= 1200:
    novo_salario = salario * 1.10
    reajuste = novo_salario - salario
    percentual = "10 %"

elif salario > 1200 and salario <= 2000:
    novo_salario = salario * 1.07
    reajuste = novo_salario - salario
    percentual = "7 %"

elif salario > 2000:
    novo_salario = salario * 1.04
    reajuste = novo_salario - salario
    percentual = "4 %"

print("Novo salario: {:.2f}\n"
      "Reajuste ganho: {:.2f}\n"
      "Em percentual: {}".format(novo_salario, reajuste, percentual))