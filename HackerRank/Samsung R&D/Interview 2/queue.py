
t = int(input())
line = []

for i in range(t):
    n = input()
    n = n.split(" ")
    if n[0] == '1':
        line.append(int(n[1]))
    elif n[0] == '2':
        line.pop(0)
    elif n[0] == '3':
        print(line[0])

