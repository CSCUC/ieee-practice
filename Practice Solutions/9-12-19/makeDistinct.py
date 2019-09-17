
import math
from collections import deque
N = input()

def findStart(left, right):
    avg = round((prefixSums[right + 1] - prefixSums[left]) / (1 + right - left))
    # print("find start called with",left, right)
    # print("sum:",(prefixSums[right + 1] - prefixSums[left]))
    # print("count:", (1 + right - left))
    # print("ave:",avg)
    start = int(avg) - ((1 + right - left) // 2)
    score1 = score2 = 0
    for i, val in enumerate(arr[left:right + 1]):
        score1 += abs(start + i - val)
        score2 += abs(start + 1 + i - val)

    return start if score1 <= score2 else start + 1
    # return int(avg) - ((1 + right - left) // 2)
    #return start if start <= arr[right] else start - 1

class segment:
    def __init__(self, left, right, start):
        self.left = left
        self.right = right
        self.end = start + right - left
        self.start = start
    def __str__(self):
        return str(self.left) + ' ' + str(self.right)

stack = deque()

arr = sorted([ int(s) for s in input().split() ])
prefixSums = [0,arr[0]]

for val in arr[1::]:
    prefixSums.append(prefixSums[-1] + val)

#print(prefixSums)

leftBound = 0

for i, (val, lastVal) in enumerate(zip(arr, arr[1::])):
    if lastVal > val + 1:
        start = findStart(leftBound, i)
        while(len(stack) > 0):
            lastRange = stack.pop()
            if start > lastRange.end:
                stack.append(lastRange)
                break
            leftBound = lastRange.left
            start = findStart(leftBound, i)
        
        stack.append(segment(leftBound, i, start))
        leftBound = i + 1


start = findStart(leftBound, len(arr) - 1)

while(len(stack) > 0):
    lastRange = stack.pop()
    if start > lastRange.end:
        stack.append(lastRange)
        break
    leftBound = lastRange.left
    start = findStart(leftBound, len(arr) - 1)

stack.append(segment(leftBound, len(arr) - 1, start))

score = 0         
for seg in stack:
    print(seg.start)
    for i, val in enumerate(arr[seg.left:seg.right + 1]):
        score += abs(seg.start + i - val)
print (score)

