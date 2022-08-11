n1 = int(input("Enter the array size: "))
a = []
print("Enter the data:")
for i in range(n1):
    x = int(input())
    if x == 0:
        print("0 can't be taken as input. Re-enter data.")
        x = int(input())
    a.append(x)
print("Original Array:-")
print(a)
print("Enter the lower and upper limit of the range:")
m = int(input())
n = int(input())
for i in range((m-1), n):
    a[i] = 0
print("Modified Array:-");
b = []
for i in range(n1):
    if a[i] != 0:
        b.append(a[i])
print(b)
