def check(t):
    return all(i == t[0] for i in t)


x = (5, 5, 5, 5)
print(check(x))
