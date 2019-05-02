t = int(input())
st = []
for i in range(t):
    str = input()
    str = str.split(" ")
    if str[0] == '1':
        st.append(int(str[1]))

    elif str[0] == '2':
        st.pop()

    elif str[0] == '3':
        print(max(st))
