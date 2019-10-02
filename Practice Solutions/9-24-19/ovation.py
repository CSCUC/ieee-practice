import sys
sys.stdin = open('ovationLarge.in', 'r')  
sys.stdout = open('ovationLarge.txt', 'w') 
for tc in range(1, int(input()) + 1):
    maxShy, digits = input().split()
    added, count = 0, 0
    for i, member in enumerate([int(x) for x in list(digits)]):
        if count < i:
            added += 1
            count += 1
        count += member
    print("Case #{}: {}".format(tc, added))