n = int(input("Enter the array size: "))
a = []
print("Enter the data:")
for i in range(n):
    x = int(input())
    a.append(x)
a.sort()
print(f"Minimum element in the array is: {a[0]}")
