# exact same code that i used in my C++ program...
# but this one gets all the points...?
T = int(raw_input())
for i in range(T):
    uI = int(raw_input())
    n1 = int(1)
    n2 = int(1)
    # minus one... because fibonacci said so
    for j in range(uI - 1):
        n = n1 + n2
        n1 = n2
        n2 = n

    print n2
