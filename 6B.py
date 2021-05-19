n, k, pChar = input().split()
n = int(n)
k = int(k)

# print(n+1, k+1, pChar)

lines = []

for i in range(n):
    line = input()
    lines.append(line)

adj_list = []

for i in range(n):
    for j in range(k):
        if lines[i][j] == pChar:
            if i-1 >= 0 and i-1 < n and j >= 0 and j < k and lines[i-1][j] not in ['.', pChar]: adj_list.append(lines[i-1][j])
            if i+1 >= 0 and i+1 < n and j >= 0 and j < k and lines[i+1][j] not in ['.', pChar]: adj_list.append(lines[i+1][j])
            if i >= 0 and i < n and j-1 >= 0 and j-1 < k and lines[i][j-1] not in ['.', pChar]: adj_list.append(lines[i][j-1])
            if i >= 0 and i < n and j+1 >= 0 and j+1 < k and lines[i][j+1] not in ['.', pChar]: adj_list.append(lines[i][j+1])

print(len(set(adj_list)))
