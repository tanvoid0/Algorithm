a = float(input())
s = "Intervalo "
if a >= 0 and a<=25:
    s += "[0,25]"
elif a >25 and a<=50:
    s += "(25,50]"
elif a >50 and a<=75:
    s += "(50,75]"
elif a > 75 and a <=100:
    s += "(75,100]"
else :
    s = "Fora de intervalo"
print(s)
