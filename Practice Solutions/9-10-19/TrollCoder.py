output = "A "
n = int(input())
print('Q',"1 " * n)
count = int(input())
for i in range(n):
    print("Q ", "1 " * i, "0 ", "1 " * (n - i - 1), sep='') # pray to python
    output += "1 " if count > int(input()) else "0 "
print(output)