x, y = [float(x) for x in input().split()]

if x > 0 and y > 0:
      quadrante = "Q1"
elif x > 0 and y < 0:
      quadrante = "Q4"
elif x < 0 and y > 0:
      quadrante = "Q2"
elif x < 0 and y < 0:
      quadrante = "Q3"
elif x == 0 and y == 0:
      quadrante = "Origem"
else:
      if x == 0 and y != 0:
            quadrante = "Eixo Y"
      if y == 0 and x != 0:
            quadrante = "Eixo X"

print(quadrante)
