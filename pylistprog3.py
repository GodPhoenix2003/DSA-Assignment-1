n = int(input("Enter the list size: "))
a = []
print("Enter the data:")
for i in range(n):
    x = int(input())
    a.append(x)
print("Original List:-")
print(a)
for i in range(n):
    a[i] = a[i] ** 2
print("Modified List:-")
print(a)
