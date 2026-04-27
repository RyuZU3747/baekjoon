from collections import deque
import sys
input = sys.stdin.readline

n = int(input())
x = list(map(int, input().split()))
dq = deque([[x[i], i] for i in range(n)])

ans = []
while dq:
    mv, idx = dq.popleft()
    ans.append(idx+1)
    if not dq:
        break
    if mv > 0:
        for _ in range(mv-1):
            dq.append(dq.popleft())
    else:
        for _ in range(-mv):
            dq.appendleft(dq.pop())


print(*ans)