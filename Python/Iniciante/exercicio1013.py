A, B, C = input().split()

A = int(A)
B = int(B)
C = int(C)

maiorAB = ((A + B + abs(A - B))) / 2
maiorABC = ((maiorAB + C + abs(maiorAB - C))) / 2

maiorABC = int(maiorABC)

print("{} eh o maior".format(maiorABC))

