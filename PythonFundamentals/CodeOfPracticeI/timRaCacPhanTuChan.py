#Initial list
import re


res = []

# Input lengths
lengths = int(input())

# Add element
for i in range(lengths):
    # Input elements
    n = int(input())
    res.append(n)

def evenNum(res):
    result = []
    for i in res:
        if i % 2 == 0:
            result.append(i)
    print(result)

evenNum(res)