number = int(input())
lst = []
for i in range(number):
    lst.append(int(input()))
    
answer = []
for n in lst:
    if(n % 2 != 0):
        answer.append(n)      
print(answer)