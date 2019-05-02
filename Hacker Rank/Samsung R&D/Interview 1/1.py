from itertools import combinations

prime = range(1,1000)
x = int(input())
n = int(input())

max = int(x**(1/float(n)))
max_prime = []
for i in prime:
    if i <= max:
        max_prime.append(i)
        continue

    else:
        break


# print(max_prime)
permutations = []
for i in range(1,len(max_prime)+1):
    permutations.append(list(combinations(max_prime, i)))

# print(permutations)


# print(permutations[1][1])

found = 0

for i in permutations:

    for j in i:
        sum = 0
        for k in j:
            po = k**n
            sum += po
            # print(po, end=", ")
        # print("Sum: "+str(sum))
        if sum == x:
            found+=1


print(str(found))
