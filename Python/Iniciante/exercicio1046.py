# Leia a hora inicial e a hora final de um jogo.
# A seguir calcule a duração do jogo, sabendo que o mesmo pode começar em um dia
# e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.

hora_inicial, hora_final = [int(x) for x in input().split()]

if hora_inicial > hora_final:
      duracao = abs(hora_inicial - 24) + hora_final
if hora_final > hora_inicial:
      duracao = hora_final - hora_inicial
if hora_inicial == hora_final:
      duracao = 24

print("O JOGO DUROU {} HORA(S)".format(duracao))