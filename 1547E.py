nTest = int(input())

while nTest:
    nTest -= 1
    input()
    n, k = map(int, input().split(" "))
    indexes = [i for i in map(int, input().split(" "))]
    temparatures = [i for i in map(int, input().split(" "))]
    
    inf = 1 << 30
    final_temp = [inf for i in range(n)]
    for i in range(k):
        final_temp[indexes[i]-1] = temparatures[i]

    for i in range(1, n):
        final_temp[i] = min(final_temp[i], final_temp[i-1]+1)

    for i in range(n-2, -1, -1):
        final_temp[i] = min(final_temp[i], final_temp[i+1]+1)

    for i in range(n):
        print(final_temp[i], end = " ")
    print()
