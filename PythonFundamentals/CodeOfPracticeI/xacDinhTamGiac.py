a = int(input())
b = int(input())
c = int(input())

if a == b == c:
    print("Equilateral triangle")
elif a == b:
    print("Isosceles triangle")
else:
    print("Scalene triangle")