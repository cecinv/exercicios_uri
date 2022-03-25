codigo, quantidade = [int(x) for x in input().split()]


if codigo == 1:
      preço = 4.00
elif codigo == 2:
      preço = 4.50
elif codigo == 3:
      preço = 5.00
elif codigo == 4:
      preço = 2.00
elif codigo == 5:
      preço = 1.50
## else:
      ## print("Código de produto contém erro.")

preço_total = preço * quantidade

print("Total: R$ {:.2F}".format(preço_total))
