import sys
input = sys.stdin.readline
sys.setrecursionlimit(300*300)

dp = [[-1]*300 for _ in range(300)]
m, n = map(int, input().split())
mp = [[*map(int, input().split())] for _ in range(n)]

def recur(r, c):
    if r == n-1 and c == m-1:
        return 1
    if r >= n or c >= m or mp[r][c] == 0 :
        return 0
    if dp[r][c] != -1:
        return dp[r][c]
    dp[r][c] = 0
    dp[r][c] |= recur(r+1, c)
    dp[r][c] |= recur(r, c+1)
    return dp[r][c]

print('Yes' if recur(0,0) else 'No')