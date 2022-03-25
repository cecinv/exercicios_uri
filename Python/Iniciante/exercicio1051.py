salario = float(input(""))

if salario <= 2000.00:
    imposto = "Isento"

elif salario > 2000.00 and salario <= 3000.00:
    imposto = (salario - 2000) * 0.08
    imposto = ("R$ %.2f" % imposto)

elif salario > 3000.00 and salario <= 4500.00:
    primeiro_imposto = (salario - 3000) * 0.18
    segundo_imposto = 1000 * 0.08
    imposto = primeiro_imposto + segundo_imposto
    imposto = ("R$ %.2f"%imposto)

elif salario > 4500.00:
    primeiro_imposto = (salario - 4500) * 0.28
    segundo_imposto = 1500 * 0.18
    terceiro_imposto = 1000 * 0.08
    imposto = primeiro_imposto + segundo_imposto + terceiro_imposto
    imposto = ("R$ %.2f"%imposto)

print("{}".format(imposto))