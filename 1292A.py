n, k = map(int, input().split())
ara = [[1 for j in range (0, n+2)] for i in range (0, 3)]
bash = 0
while k > 0:
    k = k-1
    r, c = map(int, input().split())
    if(ara[r][c] == 0):
        ara[r][c] = 1
        if r == 1:
            if ara[2][c+1] == 0 and c+1 <= n:
                bash = bash - 1 
            if ara[2][c] == 0:
                bash = bash - 1 
            if ara[2][c-1] == 0 and c-1 >= 1:
                bash = bash - 1 
        if r == 2:
            if ara[1][c+1] == 0 and c+1 <= n:
                bash = bash - 1 
            if ara[1][c] == 0:
                bash = bash - 1 
            if ara[1][c-1] == 0 and c-1 >= 1:
                bash = bash - 1     
    else:
        ara[r][c] = 0
        if r == 1:
            if ara[2][c+1] == 0 and c+1 <= n:
                bash = bash + 1 
            if ara[2][c] == 0:
                bash = bash + 1 
            if ara[2][c-1] == 0 and c-1 >= 1:
                bash = bash + 1 
        if r == 2:
            if ara[1][c+1] == 0 and c+1 <= n:
                bash = bash + 1 
            if ara[1][c] == 0:
                bash = bash + 1 
            if ara[1][c-1] == 0 and c-1 >= 1:
                bash = bash + 1
    if bash == 0:
        print("yEs")
    else:
        print("nO")
