n = int(input())


def sumOfAll(n):
    sum_ = 0
    for i in range(1, n):
        if n % i == 0:
            sum_ += i
    return sum_


print(sumOfAll(n))
