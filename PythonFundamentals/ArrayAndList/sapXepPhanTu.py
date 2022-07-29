from os import lstat


number = int(input())
lst = []
for i in range(number):
    lst.append(int(input()))
lst.sort()
print(lst)