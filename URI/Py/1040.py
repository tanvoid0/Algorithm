a,b,c,d = map(float, input().split())

x = (a*2)+(b*3)+(c*4)+(d*1)
x = float(x/ 10)

print("Media: %.1f" % x)
if x >= 7:
    print("Aluno aprovado.")
elif x < 5:
    print("Aluno reprovado.")

elif x >=5 and x<= 6.9:
    print("Aluno em exame.")
    a = float(input())
    print("Nota do exame: "+str(a))

    a = (x+a)/2
    if a >= 5:
        print("Aluno aprovado.")
    if a <= 4.9:
        print("Aluno reprovado.")
    print("Media final: "+str(a))