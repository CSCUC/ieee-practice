vals = set()
n = int(input())
for i in range(n):
    vals.add(int(input()))
for i in range(1, n + 2):
    if i not in vals:
        print(i)
        break