import itertools

my_list = [ 'a', 'b', 'c', 'd', 'e', 'f']

permutations = itertools.permutations(my_list, 6)
for c in permutations:
	print(c)

# combinations = itertools.combinations(my_list, 3)
# for c in combinations:
# 	print(c)

