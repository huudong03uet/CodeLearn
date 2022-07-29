n = int(input())
lst = []
for i in range(n):
    lst.append(int(input()))

n_min = lst[0]

for number in lst:
    if n_min > number:
        n_min = number
print(n_min)