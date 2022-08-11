n = int(input("Enter the list size: "))
a = []
print("Enter the data:")
for i in range(n):
    x = int(input())
    a.append(x)
print("Original List:-")
print(a)
data = int(input("Enter the data to be deleted: "))
occ = a.count(data)
for i in range(occ):
    a.remove(data)
print("Modified List:-")
print(a)
