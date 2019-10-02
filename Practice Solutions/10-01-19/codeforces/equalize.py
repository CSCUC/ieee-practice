from math import ceil
for tc in range(int(input())):
    n = int(input())
    vals = [int(x) for x in input().split()]
    print(ceil(sum(vals) / n))
# https://codeforces.com/contest/1234/problem/A