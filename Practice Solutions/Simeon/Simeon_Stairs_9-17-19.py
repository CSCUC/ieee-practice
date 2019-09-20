## Simeon

def fib(n):
    if n == 0: 
        return 0

    if n == 1: 
        return 1

    def matmul(M1, M2):
        a11 = M1[0][0]*M2[0][0] + M1[0][1]*M2[1][0]
        a12 = M1[0][0]*M2[0][1] + M1[0][1]*M2[1][1]
        a21 = M1[1][0]*M2[0][0] + M1[1][1]*M2[1][0]
        a22 = M1[1][0]*M2[0][1] + M1[1][1]*M2[1][1]
        return [[a11, a12], [a21, a22]]

    def matPower(mat, p):
        if p == 1: 
            return(mat)

        m2 = matPower(mat, p//2)
        if p % 2 == 0:
            return(matmul(m2, m2))
        else: 
            return(matmul(matmul(m2, m2),mat))

    Q = [[1,1],[1,0]]

    q_final = matPower(Q, n-1)
    return(q_final[0][0])


n = int(input())
for a0 in range(n):
    n2 = int(input())
    n2 += 1
    result = fib(n2)
    print(result)
