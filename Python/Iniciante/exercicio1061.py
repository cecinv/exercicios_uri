dia, dia_inicio = input().split()
hhi, mmi, ssi = input().split(" : ")

dia, dia_termino = input().split()
hht, mmt, sst = input().split(" : ")

dia_inicio = int(dia_inicio)
dia_termino = int(dia_termino)

hhi = int(hhi)
mmi = int(mmi)
ssi = int(ssi)

hht = int(hht)
mmt = int(mmt)
sst = int(sst)

dias = dia_termino - dia_inicio
segundos_dias = dias * 24 * 60 * 60

segundos_inicial = ssi + (mmi * 60) + (hhi * 60 * 60)
segundos_final = sst + (mmt * 60) + (hht * 60 * 60)

segundos_totais = segundos_dias - segundos_inicial + segundos_final

horas_totais = segundos_totais // 3600
segundos_restantes = segundos_totais % 3600

minutos = segundos_restantes // 60
segundos = segundos_restantes % 60

dias = horas_totais // 24
horas = horas_totais % 24

print("{} dia(s)\n"
      "{} hora(s)\n"
      "{} minuto(s)\n"
      "{} segundo(s)".format(dias, horas, minutos, segundos))