number = int(input())
lst = []
for i in range(number):
    lst.append(int(input()))
    
answer = []
for n in lst:
    if(n % 5 == 0):
        answer.append(n)
        
if len(answer) == 0:
    print(0)
else:
    print(answer)