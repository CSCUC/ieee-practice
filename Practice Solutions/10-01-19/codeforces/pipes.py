for tc in range(int(input())):
    n = int(input())
    row = [[int(x) for x in list(input())], [int(x) for x in list(input())]]
    rowPos = 0
    for i in range(n):
        if row[rowPos][i] == 1 or row[rowPos][i] == 2:
            continue
        rowPos = 0 if rowPos == 1 else 1 # alt: rowPos = (rowPos + 1) % 2      
        if row[rowPos][i] == 1 or row[rowPos][i] == 2:
            print("NO")
            break
    else: 
        if rowPos == 1: print("YES")
        else: print("NO")