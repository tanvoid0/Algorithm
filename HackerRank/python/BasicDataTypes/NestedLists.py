# students = []
# if __name__ == '__main__':
#     for _ in range(int(input())):
#         name = input()
#         score = round(float(input()), 2)
#         students.append([name, score])
#
# lowest_mark = sorted(students)
# print(sorted(students, key=lambda x: int(x[1])))
students = [['Harry', 37.21],
            ['Berry', 37.21],
            ['Tina', 37.2],
            ['Akriti', 41],
            ['Harsh', 39]]
print(sorted(students, key=lambda  x: x[1]))
sorted_students = sorted(students, key=lambda  x: x[1])
lowest_mark = sorted_students[0][1]
second_lowest = None
names = []
for i in sorted_students:
    if lowest_mark < i[1] and (second_lowest is None or i[1] == second_lowest):
        second_lowest = i[1]
        names.append(i[0])
names = sorted(names)
for i in names:
    print(i)