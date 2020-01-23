from math import sqrt
test = int(input())
while test > 0:
    test -= 1 
    n = int(input())
    first = []
    sz = 0
    for i in range (2, int(sqrt(n)+1)):
        if(n % i == 0):
            first.append(i)
            sz += 1
    
    found = False
    for i in range (sz):
        for j in range (i+1, sz):
            if first[i] != first[j] and n % (first[i]*first[j]) == 0\
            and n / (first[i]*first[j]) != first[i] and n / (first[i]*first[j]) != first[j]:
                print("YES")
                print(first[i], end = " ")
                print(first[j], end = " ")
                print(int(n / (first[i]*first[j])))
                found = True
                break
        if(found): break
    
    if(found == False): print("NO")
    
