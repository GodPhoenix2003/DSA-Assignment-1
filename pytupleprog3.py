x = (10, 20, 30, 40, 50, 60)
print("Original Tuple:-", x)
print("Enter the starting and ending positions you want to copy in a new tuple:")
start = int(input())
end = int(input())
y = x[(start-1) : end]
print("Copied Tuple:-", y)
