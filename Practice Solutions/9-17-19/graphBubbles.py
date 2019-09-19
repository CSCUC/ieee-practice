def TraceNode(setIn, node, parent):
    if node in setIn: return False
    setIn.add(node)
    visited[node] = True
    
    for edge in nodes[node]:
        if edge == parent: continue
        if not TraceNode(setIn.copy(), edge, node):
            return False
    return True


for tc in range(int(input())):
    nodes = [set() for i in range(1001)]
    visited = [False for i in range(1001)]
    garb = input()
    edges = [int(n) for n in input().split()]
    for x,y in zip(edges[1::2], edges[::2]):
        if x in nodes[y] or x == y:
            print(1)
            break
        nodes[x].add(y)
        nodes[y].add(x)
    else:
        for i in range(1001):
            if visited[i] or len(nodes[i]) == 0:
                continue
            if not TraceNode(set(), i, i):
                print(1)
                break
        else:
            print(0)
            
# https://csacademy.com/ieeextreme-practice/task/979a09a0cd8c4e98dd0a690f39a55bd2/
