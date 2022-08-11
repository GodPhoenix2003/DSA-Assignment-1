r = int(input(f"Enter the number of rows: "))
c = int(input("Enter the number of columns: "))
a = [[0 for j in range(c)] for i in range(r)]
print("Enter the data: ")
for i in range(r):
    for j in range(c):
        x = int(input(f"a[{i}][{j}] = "))
        a[i][j] = x
flag = 0
data = int(input("Enter the data to be searched: "))
for i in range(r):
    for j in range(c):
        if a[i][j] == data:
            flag = 1
            break
if flag == 1:
    print("Data Found!")
else:
    print("Data Not Found!")
