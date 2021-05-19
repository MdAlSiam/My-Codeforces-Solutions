n = int(input())
ara = list(map(int, input().split()))
cs = [ara[0] for i in range(n)]
bcs = [ara[n-1] for i in range(n)]
for i in range(1, n): cs[i] = cs[i-1]+ara[i]
for i in range(n-2, -1, -1): bcs[i] = bcs[i+1]+ara[i]

# print(cs)
# print(bcs)

aliceEats = 0
for i in range(n):
    if cs[i] <= bcs[i]: aliceEats += 1

print(aliceEats, n-aliceEats)
