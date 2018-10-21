import itertools

salary = float(input())

inc = 0.04
# noinspection PyTypeChecker
if  0 <= salary <= 400:
    inc = .15
elif 400 <= salary <= 800:
    inc = .12
elif 800 <= salary <= 1200:
    inc = .10
elif 1200 <= salary <= 2000:
    inc = .07
elif salary > 2000:
    inc = .04

inc_sal = salary * inc
new = salary + inc_sal

inc = int(100 * inc)
print("Novo salario: %.2f" % new)
print("Money earned: %.2f" % inc_sal)
print("In percentage: "+str(inc)+" %")
