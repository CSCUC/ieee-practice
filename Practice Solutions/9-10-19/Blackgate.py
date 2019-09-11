heightName = dict()
n = int(input())
for i in range(n):
    name, height = list(input().split(' '))
    heightName.setdefault(height,[]).append(name)
start = 1
for nameList in sorted(heightName.items()):
    print(' '.join(sorted(nameList[1])), start, start + len(nameList[1]) -1)
    start += len(nameList[1])