import sys
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    m,n = map(int,input().split())
    mp = [[*map(int, input().split())] for i in range(n)]
    ans = -1e9000
    ansc = 0
    for c in range(m):
        cur = 1
        for r in range(n):
            cur = cur * mp[r][c]
        if cur >= ans:
            ans = max(ans, cur)
            ansc = c
    print(ansc+1)