r = int(input(f"Enter the number of rows: "))
c = int(input("Enter the number of columns: "))
a = [[0 for j in range(c)] for i in range(r)]
print("Enter the data: ")
for i in range(r):
    for j in range(c):
        x = int(input(f"a[{i}][{j}] = "))
        a[i][j] = x
max = a[0][0]
for i in range(r):
    for j in range(c):
        if a[i][j] > max:
            max = a[i][j]
print(f"Maximum element in the 2D array is: {max}")
