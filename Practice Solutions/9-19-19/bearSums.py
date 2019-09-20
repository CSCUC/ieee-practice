for tc in range(int(input())):
    valSet = set()
    S, E = [int(n) for n in input().split()]
    for i in [int(n) for n in input().split()]:
        if S - i in valSet:
            print(' '.join(str(val) for val in sorted([S-i,i])))
            break
        valSet.add(i)
    else:
        print("!OK")
        
# https://csacademy.com/ieeextreme-practice/task/bear-sums/statement/