def merge(a1, a2):
    return(a1.update(a2))


x = {'one': 1, 'two': 2}
y = {'three': 3, 'four': 4}
merge(x, y)
print(x)
