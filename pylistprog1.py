n = int(input("Enter the list size: "))
a = []
print("Enter the data:")
for i in range(n):
    x = int(input())
    a.append(x)
print("Original List:-")
print(a)
a.reverse()
print("Reversed List:-")
print(a)
