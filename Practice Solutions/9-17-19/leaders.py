for tc in range(1,int(input()) + 1):
    max = 0
    maxName = ""
    for i in range(int(input())):
        stringIn = input()
        setChars = set()
        for c in stringIn.strip():
            setChars.add(c)
        if len(setChars) == max:
            maxName = stringIn if stringIn < maxName else maxName
        if len(setChars) > max:
            max = len(setChars)
            maxName = stringIn
    print("Case#", tc, ": ", maxName, sep='')