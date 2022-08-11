n = int(input("Enter the list size: "))
a = []
print("Enter the data:")
for i in range(n):
    x = int(input())
    a.append(x)
print("Original List:-")
print(a)
print("Enter the data to be added and the position at which it is to be added:")
data = int(input())
pos = int(input())
a.insert((pos-1), data)
print("Modified List:-")
print(a)
