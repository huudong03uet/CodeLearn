number = int(input())
lst = []
for i in range(number):
    lst.append(int(input()))
sum = 0
for number_ in lst:
    sum += number_
print(sum)