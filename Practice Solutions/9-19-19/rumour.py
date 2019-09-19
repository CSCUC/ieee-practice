for tc in range(int(input())):
    a, b = [int(n) for n in input().split()]
    count = 0
    while(a != b):
        if b.bit_length()