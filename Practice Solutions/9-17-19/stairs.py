testCount = int(input())

fibVals = [1,1]
for n in range(2, 22001):
    fibVals.append(fibVals[n-1] + fibVals[n-2])

for tc in range(testCount):
    val = int(input())
    print(fibVals[val])