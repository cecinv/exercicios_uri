nome_input = input("")
nome_funcionario = nome_input.upper()
salario_fixo = float(input(""))
montante_vendas = float(input(""))


salario_total = (15 * montante_vendas)/ 100 + salario_fixo


## print("NOME = {}".format(nome_funcionario))
print("TOTAL = R$ {:.2f}".format(salario_total))