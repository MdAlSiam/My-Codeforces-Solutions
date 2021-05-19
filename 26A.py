def nPrimeDivisors(num):
    ret = 0
    
    if num%2 == 0:
        ret += 1
        while num%2 == 0:
            num /= 2

    i = 3
    while i*i <= num:
        if num%i == 0:
            ret += 1
            while num%i == 0:
                num /= i
        i += 2

    if num != 1:
        ret += 1

    return ret

n = int(input())
ans = 0
for i in range(2, n+1):
    if nPrimeDivisors(i) == 2:
        # print(">", i)
        ans += 1

print(ans)
