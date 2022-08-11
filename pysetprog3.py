num_set = {1, 2, 3, 4, 5, 6, 7, 8}
print("Original Set:-")
print(num_set)
delete = [3, 4, 5]
num_set.difference_update(delete)
print("Modified Set:-")
print(num_set)
