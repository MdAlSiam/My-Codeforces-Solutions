    test = int(input())
    while(test > 0):
        test -= 1 
        a, b, c, x = map(int, input().split())
        maxi = max(a, b, c)
        lagbe = maxi - a + maxi - b + maxi - c 
        if lagbe>x:
            print("NO\n")
            continue
        x -= lagbe 
        if x%3 == 0:
            print("YES\n")
        else:
            print("NO\n")
