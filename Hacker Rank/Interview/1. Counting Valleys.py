x = 0
total = 0
deep = False

n = 12
s = "DDUUDDUDUUUD"
for i in s:
    if i == 'U':
        x+=1
    else:
        x-=1
    if not deep and x < 0:
        deep = True
        total += 1
    if deep and x == 0:
        deep = False
print(total)

# -                                           /   \
#     \           /   \                   /
        # \   /           \   /   \   /