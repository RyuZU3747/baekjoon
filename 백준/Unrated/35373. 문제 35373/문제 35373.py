from collections import defaultdict
import sys
n = int(sys.stdin.readline())
d = defaultdict(int)
ans = 0
for _ in range(n):
    x, y = sys.stdin.readline().split()
    y = int(y)
    d[x] += y
ans += (d['S']+5)//6
ans += (d['M']+7)//8
ans += (d['L']+11)//12
print(ans)