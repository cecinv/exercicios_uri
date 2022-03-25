# Leia a hora inicial, minuto inicial, hora final e minuto final de um jogo.
# A seguir calcule a duração do jogo.
# Obs: O jogo tem duração mínima de um (1) minuto e duração máxima de 24 horas.

hora_inicial, minuto_inicial, hora_final, minuto_final = [int(x) for x in input().split()]

minutos_totais_i = (hora_inicial * 60) + minuto_inicial
minutos_totais_f = (hora_final * 60) + minuto_final

if minutos_totais_f > minutos_totais_i:
      minutos_duracao = minutos_totais_f - minutos_totais_i
      duracao = minutos_duracao // 60
      minuto = minutos_duracao % 60

if minutos_totais_i == minutos_totais_f:
      duracao = 24
      minuto = 0

if minutos_totais_i > minutos_totais_f:
      minutos_duracao = minutos_totais_i - minutos_totais_f
      minutos_duracao = (24 * 60) - minutos_duracao
      duracao = minutos_duracao // 60
      minuto = minutos_duracao % 60

print("O JOGO DUROU {} HORA(S) E {} MINUTO(S)".format(duracao, minuto))