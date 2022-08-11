n1 = int(input("Enter the size of the 1st list: "))
a = []
print("Enter the data in the 1st list:")
for i in range(n1):
    x = input()
    a.append(x)
print("1st Original List:-")
print(a)
n2 = int(input("Enter the size of the 2nd list: "))
b = []
print("Enter the data in the 2nd list:")
for i in range(n2):
    x = input()
    b.append(x)
print("2nd Original List:-")
print(b)
c = [i + j for i, j in zip(a, b)]
print("Modified List:-")
print(c)
