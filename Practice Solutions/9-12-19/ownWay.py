tests = int(input())
for test in range(0,tests):

    N = int(input()) 

    inString = input()
    
    print("Case #{}: ".format(test + 1), end="")

    for s in inString:
        if s == 'S':
            print('E', end="")
        else:
            print('S', end="")
    print()