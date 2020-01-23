    test = int(input())
    while(test > 0):
        test -= 1
        n = int(input())
        ara = []
        ara.append((0, 0))
        for i in range (1, n+1):
            t1, t2 = map(int, input().split())
            ara.append((t1, t2))
        ara.sort()
        impossible = False
        for i in range (1, n+1):
            if(ara[i][0] < ara[i-1][0] or ara[i][1] < ara[i-1][1] ):
                impossible = True
                break
        if impossible:
            print("NO")
            continue
        print("YES")
        for i in range (1, n+1):
            rc = ara[i][0] - ara[i-1][0];
            for j in range (rc):
                print("R", end = "")
            uc = ara[i][1] - ara[i-1][1]
            for j in range (uc):
                print("U", end = "")
        print()
