queue = [1,2,3,4,5]
while True:
    ch = int(input("Enter choice: "))
    if ch == 1:
        n = int(input("Enter number: "))
        queue.append(n)
    if ch == 2:
        print("popped: "+str(queue.pop(0)))
    if ch == 3:
        print(queue)
    if ch == 4:
        print("Exiting software")
        break





