a, b, c = [float(x) for x in input().split()]

## verificar condição de existência:
if abs(b - c) < a < b + c and abs(a - c) < b < a + c and abs(a - b) < c < a + b:
      perimetro = a + b + c
      print("Perimetro = {:.1f}".format(perimetro))
else:
      area = ((a + b) * c) / 2
      print("Area = {:.1f}".format(area))