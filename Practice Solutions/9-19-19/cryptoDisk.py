from math import radians, sin, cos, ceil, sqrt

r = int(input())
letterMap = {}
for i in range(26):
    letter, val = input().split()
    val = float(val)
    letterMap[letter] = (r*cos(radians(val)), r*sin(radians(val)))

x, y = (0,0)
dist = 0

for c in input().upper():
    if not c.isalpha(): continue 
    dist += sqrt( (x - letterMap[c][0]) ** 2 + (y - letterMap[c][1]) ** 2)
    x, y = (letterMap[c][0], letterMap[c][1])

print(ceil(dist))

#https://csacademy.com/ieeextreme-practice/task/d48ada9a7213299f1b24b22b2fb9443f/