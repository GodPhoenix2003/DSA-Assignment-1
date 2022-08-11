n = int(input("Enter the size of the array: "))
a = []
print("Enter the data: ")
for i in range(n):
    x = int(input())
    a.append(x)
data = int(input("Enter the data to be searched: "))
flag = 0
for i in range(n):
    if a[i] == data:
        flag = 1
        break
if flag == 1:
    print("Data Found!")
else:
    print("Data Not Found!")
