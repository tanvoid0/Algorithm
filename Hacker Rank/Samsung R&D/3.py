crossword = []
gapx = []
gapy = []
for i in range(10):
    x = input()
    crossword.append(x)
    gapx.append(crossword[i].count('-'))
words = input()
words = words.split(";")
print(words)

print(gapx)

print(crossword[9][8])
for i in range(10):
    sum = 0
    for j in range(10):
        if crossword[j][i] == '-':
            sum += 1
    gapy.append(sum)
print(gapy)