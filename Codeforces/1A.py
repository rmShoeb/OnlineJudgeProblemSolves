import math

n, m, a = input().split()
n = int(n)
m = int(m)
a = int(a)

side1 = math.ceil(n/a)
side2 = math.ceil(m/a)

print(side1*side2)