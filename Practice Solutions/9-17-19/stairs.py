for tc in range(int(input())):
    count = ([0] * (int(input()) - 1)) + [1,1]
    for i in reversed(range(len(count) - 2)):
        count[i] = count[i + 1] + count[i + 2]
    print(count[0])