start, end = map(int, input().split())

if(end>start):
    hour = end - start
else:
    hour = (24-start)+end

print("O JOGO DUROU "+ str(hour) +" HORA(S)")