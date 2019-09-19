# for tc in range(int(input())):
#     a, b = [int(n) for n in input().split()]
#     count = 0
#     while(a != b):
#         if b.bit_length() >= a.bit_length():
#             count += 1
#             b >>= 1
#         if a.bit_length() > b.bit_length():
#             count += 1
#             a >>= 1
#     print(count)


for tc in range(int(input())):
    a, b = [bin(int(n)) for n in input().split()]
    count = abs(len(a) - len(b))
    unMatch = False
    for c1, c2 in zip(a, b):
        if unMatch: 
            count += 2
            continue
        if c1 != c2:
            unMatch = True
            count += 2
    print(count)