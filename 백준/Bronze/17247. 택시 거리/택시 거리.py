import sys
input = sys.stdin.readline

n, m = map(int, input().split())
arr = [[*map(int, input().split())] for _ in range(n)]
a = b = c = d = -1
for i in range(n):
    for j in range(m):
        if arr[i][j] == 1:
            if a == -1:
                a = i
                b = j
            else:
                c = i
                d = j

print(abs(a-c) + abs(b-d))