A, B, C = input().split()

A = float(A)
B = float(B)
C = float(C)

pi = 3.14159

area_triangulo = (A * C) / 2
area_circulo = pi * (C ** 2)
area_trapezio = ((A + B) * C) / 2
area_quadrado = B ** 2
area_retangulo = A * B

print("TRIANGULO: {:.3f}\nCIRCULO: {:.3f}\nTRAPEZIO: {:.3f}\nQUADRADO: {:.3f}\nRETANGULO: {:.3f}".format(area_triangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo))
