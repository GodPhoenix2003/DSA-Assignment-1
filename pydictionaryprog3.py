x = {
    "name": "Sagnik",
    "age": 19,
    "salary": 80000
}
keys = ["name", "salary"]
y = {k: x[k] for k in keys}
print(y)
