n1 = int(input("Enter the size of 1st array: "))
a = []
print("Enter the data in the 1st array:")
for i in range(n1):
    x = int(input())
    a.append(x)
print("1st Original Array:-")
print(a)
a.sort()
n2 = int(input("Enter the size of the 2nd array: "))
b = []
print("Enter the data in the 2nd array:")
for i in range(n2):
    x = int(input())
    b.append(x)
print("2nd Original Array:-")
print(b)
b.sort()
c = []
for i in range(n1):
    c.append(a[i])
for i in range(n2):
    c.append(b[i])
print("Merged Array:-")
print(c)
