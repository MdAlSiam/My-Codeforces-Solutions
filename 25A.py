n = int(input()) 
ara = list(map(int, input().split(" ")))

evenKount = 0
oddKount = 0

for i in range(n):
    if (ara[i] & 1): oddKount += 1
    else: evenKount += 1

# print(oddKount, evenKount, "haha")

if oddKount == 1:
    for i in range(n):
        if (ara[i] & 1):
            print(i+1)
            break
else:
    for i in range(n):
        if not (ara[i] & 1):
            print(i+1)
            break
