fibVals = [1,1]
for n in range(2, 60):
    fibVals.append((fibVals[n-1] + fibVals[n-2]) % 10)
for tc in range(int(input())):
    print(fibVals[int(input()) % 60])