for tc in range(int(input())):
    input()
    tracker = {2 ** x: 0 for x in range(0, 12)}
    for val in [int(n) for n in input().split()]:
        tracker.setdefault(val,0)
        tracker[val] += 1
    for i in range(11):
        tracker[2 ** (i + 1)] += tracker[2 ** i] // 2
    if tracker[2048] == 0: print("NO")
    else: print("YES")
