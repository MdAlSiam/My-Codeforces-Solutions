n, k = map(int, input().split())
ara = list(map(int, input().split()))

ans = 0

for i in range(1, n):
    if ara[i-1] < ara[i]: continue
    nMoves = (ara[i-1]-ara[i]+k)//k
    ara[i] += nMoves*k
    ans += nMoves

print(ans)
