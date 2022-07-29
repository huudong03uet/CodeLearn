stri = str(input())
answer = []

def findWord(word):
    lst = word.split()
    for i in lst:
        if len(i) > 3:
            answer.append(i)

findWord(stri)
print(answer)