for tc in range(int(input())):
    n = int(input())
    row = [[int(x) for x in list(input())], [int(x) for x in list(input())]]
    rowPos = 0
    for i in range(n):
        if row[rowPos][i] < 3:
            continue
        rowPos ^= 1 # alt: rowPos = (rowPos + 1) % 2      
        if row[rowPos][i] < 3:
            print("NO")
            break
    else: 
        if rowPos == 1: print("YES")
        else: print("NO")
# https://codeforces.com/contest/1234/problem/C