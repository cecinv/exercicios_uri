import math

A, B, C = [float(x) for x in input().split()]

delta = (B ** 2) - (4 * A * C)

if delta < 0 or A == 0:
      print("Impossivel calcular")

elif delta > 0:
      x1 = (- B + math.sqrt(delta)) / (2 * A)
      x2 = (- B - math.sqrt(delta)) / (2 * A)
      print("R1 = {:.5f}\n"
            "R2 = {:.5f}".format(x1, x2))

elif delta == 0:
      x1 = (- B + math.sqrt(B ** 2 - (4 * A * C))) / 2 * A
      print("R1 = {}".format(x1))