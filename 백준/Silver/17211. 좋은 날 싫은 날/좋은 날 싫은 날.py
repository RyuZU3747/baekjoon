import sys
input = sys.stdin.readline

n, x = map(int, input().split())
arr = list(map(float, input().split()))
dp = [[-1,-1] for _ in range(101)]

def recur(cur, ki):
    if cur == 0 and ki == x:
        return 1
    if cur == 0 and ki != x:
        return 0
    if dp[cur][ki] != -1:
        return dp[cur][ki]
    dp[cur][ki] = 0
    if ki == 0:
        dp[cur][ki] += recur(cur - 1, 0) * arr[0]
        dp[cur][ki] += recur(cur - 1, 1) * arr[2]
    else:
        dp[cur][ki] += recur(cur - 1, 0) * arr[1]
        dp[cur][ki] += recur(cur - 1, 1) * arr[3]
    return dp[cur][ki]


print(round(recur(n, 0)*1000))
print(round(recur(n, 1)*1000))