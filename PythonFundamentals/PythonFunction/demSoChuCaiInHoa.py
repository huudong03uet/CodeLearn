def show(s):
    cnt_upper = 0
    cnt_lower = 0
    for i in s:
        if i.isupper() == True:
            cnt_upper += 1
        elif i.islower() == True:
            cnt_lower += 1
    print("Given string:", s)
    print("Number of uppercase letters:", cnt_upper)
    print("Number of lowercase letters:", cnt_lower)


s = str(input())
show(s)