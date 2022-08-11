x = {1, 2, 3, 5, 7, 8, 10}
y = {2, 4, 5, 6, 8, 9, 10}
a = []
for i in x:
    if i in y:
        a.append(i)
print(a)
