A, B, C = [float(x) for x in input().split()]

lista_lados = [A, B, C]
lista_decrescente = sorted(lista_lados, reverse= True)

A = lista_decrescente[0]
B = lista_decrescente[1]
C = lista_decrescente[2]

if A >= B + C:
      print("NAO FORMA TRIANGULO")
elif A ** 2 == B ** 2 + C ** 2:
      print("TRIANGULO RETANGULO")
elif A ** 2 > B ** 2 + C ** 2:
      print("TRIANGULO OBTUSANGULO")
elif A ** 2 < B ** 2 + C ** 2:
      print("TRIANGULO ACUTANGULO")

if A == B == C:
      print("TRIANGULO EQUILATERO")
elif A == B or A == C or B == C:
      print("TRIANGULO ISOSCELES")