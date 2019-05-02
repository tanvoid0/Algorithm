import itertools
str = [0, 1]
obj = list(itertools.combinations(str, 5))
print(obj)
sum = 0;
for i in range(len(obj)):
    obj[i] = list(obj[i])
    print()

for i in obj:
    if i[0] == '1':
        sum+=1

print(sum)