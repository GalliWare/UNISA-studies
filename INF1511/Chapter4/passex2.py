def convert(x: int):
    if x == 0:
        pass
    if x == 1:
        return "One"
    if x == 2:
        return "Two"
    if x == 3:
        return "Three"
    if x == 4:
        return "Four"


n = int(input("Enter number between 1 and 4: "))
print(n, "in words is", convert(n))
