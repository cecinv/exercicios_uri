numero_funcionario = int(input(""))
horas_trabalhadas = int(input(""))
valor_por_hora = float(input(""))

salario = horas_trabalhadas * valor_por_hora

print("NUMBER = {}".format(numero_funcionario))
print("SALARY = U$ {:.2f}".format(salario))