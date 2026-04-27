import sys
from collections import defaultdict
n, k = map(int, sys.stdin.readline().split())
arr = [0 for _ in range(n)]
mx = defaultdict(int)
cnt = [0]*k
for i in range(n):
    arr[i] = list(map(int, sys.stdin.readline().split()))
ans = 0

for i in range(k):
    for j in range(n):
        if mx[i] < arr[j][i]:
           cnt[i] = 1
           mx[i] = arr[j][i]
        elif mx[i] == arr[j][i]:
            cnt[i] = 2

for i in range(n):
    t = 0
    for j in range(k):
        if mx[j] == arr[i][j] and cnt[j] == 1:
            t += 1
    if t > 0:
        ans += 1

print(ans)