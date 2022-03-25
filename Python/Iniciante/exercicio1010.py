cod_peça1, num_peça1, val_peça1 = map(float, input("").split())
cod_peça2, num_peça2, val_peça2 = map(float, input("").split())

cod_peça1 = int(cod_peça1)
num_peça1 = int(num_peça1)

cod_peça2 = int(cod_peça2)
num_peça2 = int(num_peça2)


# print("{}, {}, {}".format(cod_peça1, num_peça1, val_peça1))
# print("{}, {}, {}".format(cod_peça2, num_peça2, val_peça2))

valor_total = (num_peça1 * val_peça1) + (num_peça2 * val_peça2)

print("VALOR A PAGAR: R$ {:.2f}".format(valor_total))