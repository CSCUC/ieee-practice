from collections import deque
n, k = [int(x) for x in input().split()]

screen = deque()
screenSet = set()

for id in [int(x) for x in input().split()]:
    if id not in screenSet:
        screen.appendleft(id)
        screenSet.add(id)
        if len(screen) > k:
            screenSet.remove(screen.pop())
print(len(screen))
print(*screen)