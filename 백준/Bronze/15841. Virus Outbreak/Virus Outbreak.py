dp = [-1] *500
def recur(n):
    if n == 0:
        return 0
    if n == 1:
        return 1
    if dp[n] != -1:
        return dp[n]
    dp[n] = recur(n-2) + recur(n-1)
    return dp[n];

while(1):
    a = int(input())
    if a == -1:
        break
    print(f"Hour {a}: {recur(a)} cow(s) affected")
