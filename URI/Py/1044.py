a,b = map(int, input().split())

def sw():
    global a,b
    if a<b:
        temp = a
        a = b
        b = temp

sw()
if a%b == 0:
    print("Sao Multiplos")
else:
    print("Nao sao Multiplos")