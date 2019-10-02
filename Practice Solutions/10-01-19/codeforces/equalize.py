from math import ceil
for tc in range(int(input())):
    n = int(input())
    vals = [int(x) for x in input().split()]
    print(ceil(sum(vals) / n))