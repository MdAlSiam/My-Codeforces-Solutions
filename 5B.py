 lines = []

while True:
    try:
        line = input()
        lines.append(line)
    except:
        break

maxlen = -1
for line in lines:
    maxlen = max(len(line), maxlen)

firstLess = True

print("*"+"*"*maxlen+"*")
for line in lines:
    rem = maxlen - len(line)
    firstPart = rem // 2
    lastPart = rem - firstPart

    if firstPart != lastPart and len(line):
        if firstLess and firstPart > lastPart:
            firstPart, lastPart = lastPart, firstPart
        elif (not firstLess) and firstPart < lastPart:
            firstPart, lastPart = lastPart, firstPart
        firstLess = not firstLess

    print("*", end="")
    print(" "*firstPart, end="")
    print(line, end="")
    print(" "*lastPart, end="")      
    print("*")

print("*"+"*"*maxlen+"*")
