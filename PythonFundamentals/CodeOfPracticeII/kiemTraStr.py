
s = str(input())
def format(s):
    if len(s) >= 3:
        if "ing" in s:
            s += "ly"
        else:
            s += "ing"
    return s


print(format(s))