import sys
sys.stdin = open("A-large-practice.in") # use this to read in a file
for tc in range(1,int(input()) + 1):
    max = 0
    maxName = ""
    for i in range(int(input())):
        stringIn = input()
        setChars = set()
        for c in stringIn.replace(' ', ''): # remove all spaces
            setChars.add(c)
        if len(setChars) == max:
            maxName = stringIn if stringIn < maxName else maxName
        if len(setChars) > max:
            max = len(setChars)
            maxName = stringIn
    print("Case #", tc, ": ", maxName, sep='')