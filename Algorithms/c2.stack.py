stack = [1,2,3,4,5]
while True:
    ch = int(input("Enter choice: "))
    if ch == 1:
        n = int(input("Enter number: "))
        stack.append(n)
    if ch == 2:
        print("popped: "+str(stack.pop()))
    if ch == 3:
        print(stack)
    if ch == 4:
        print("Exiting software")
        break





