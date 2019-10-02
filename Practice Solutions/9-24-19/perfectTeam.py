for i in range(int(input())):
    C, M, X = [int(n) for n in input().split()]
    print(min(C, M, (C + M + X) // 3))