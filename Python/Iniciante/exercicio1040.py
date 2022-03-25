# Leia quatro números (N1, N2, N3, N4), cada um deles com uma casa decimal,
# correspondente às quatro notas de um aluno. Calcule a média com pesos 2, 3, 4 e 1,
# respectivamente, para cada uma destas notas e mostre esta média acompanhada
# pela mensagem "Media: ".
# Se esta média for maior ou igual a 7.0, imprima a mensagem "Aluno aprovado.".
# Se a média calculada for inferior a 5.0, imprima a mensagem "Aluno reprovado.".
# Se a média calculada for um valor entre 5.0 e 6.9, inclusive estas,
# o programa deve imprimir a mensagem "Aluno em exame.".

# No caso do aluno estar em exame, leia um valor correspondente à nota do exame obtida pelo aluno.
# Imprima então a mensagem "Nota do exame: " acompanhada pela nota digitada.
# Recalcule a média (some a pontuação do exame com a média anteriormente calculada e divida por 2).
# e imprima a mensagem "Aluno aprovado." (caso a média final seja 5.0 ou mais )
# ou "Aluno reprovado.", (caso a média tenha ficado 4.9 ou menos).
# Para estes dois casos (aprovado ou reprovado após ter pego exame)
# apresente na última linha uma mensagem "Media final: " seguido da média final para esse aluno.

# ###################################################################################### #

N1, N2, N3, N4 = [float(x) for x in input().split()]

media = ((N1 * 2) + (N2 * 3) + (N3 * 4) + (N4 * 1)) / 10

if media >= 7.0:
      aprovacao = "Aluno aprovado."
elif media < 5.0:
      aprovacao = "Aluno reprovado."
else:
      aprovacao = "Aluno em exame."

print("Media: {:.1f}\n"
      "{}".format(media, aprovacao))

if aprovacao == "Aluno em exame.":
      exame = float(input(""))
      nova_media = (media + exame) / 2
      if nova_media >= 5:
            aprovacao = "Aluno aprovado."
      else:
            aprovacao = "Aluno reprovado."
      print("Nota do exame: {:.1f}\n"
            "{}\n"
            "Media final: {}".format(exame, aprovacao, nova_media))