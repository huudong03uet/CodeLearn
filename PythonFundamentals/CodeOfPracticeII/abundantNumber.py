from operator import is_


n = int(input())

def is_abundant(n):
    sum = 0
    for i in range(1, n):
        if n % i == 0:
            sum += i
    if(sum > n):
        return True
    else:
        return False
    
print(is_abundant(n))