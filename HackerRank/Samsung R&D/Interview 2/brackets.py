t = int(input())
for i in range(t):
    my_string = input()
    pal = True
    que = ""

    for i in my_string:
        # print("char: "+i)
        # print("queu: "+que)
        if i == '{' or i == '[' or i == '(':
            # print("Start brace")
            que += i
        elif i == ')' or i == ']' or i == '}':
            # print("End brace")
            if (que[-1] == '(' and i == ')') or (que[-1] == '[' and i == ']') or (que[-1] == '{' and i == '}'):
                que = que[:-1]
            else:
                # print("Unconditioned")
                pal = False
                break
        # print("End que: "+que)

    if pal:
        print("YES")
    else:
        print("NO")

