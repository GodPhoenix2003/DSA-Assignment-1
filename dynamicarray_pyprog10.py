n = int(input("Enter the array size: "))
a = []
print("Enter the data:")
for i in range(n):
    x = int(input())
    a.append(x)
print("Original Array:-")
print(a)
m = int(input("Enter the number of new data to be added: "))
print("Enter the new data:")
for i in range(m):
    x = int(input())
    a.append(x)
print("Modified Array:-")
print(a)
