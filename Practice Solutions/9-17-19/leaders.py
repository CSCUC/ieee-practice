for tc in range(int(input())):
    max = 0
    maxList = []
    count = int(input())
    for i in range(count):
        stringIn = input().strip()
        setChars = set()
        for c in stringIn:
            setChars.add(c)
        if len(setChars) == max:
            maxList.append(stringIn)
        if len(setChars) > max:
            max = len(setChars)
            maxList = [stringIn]
    print(sorted(maxList)[0])