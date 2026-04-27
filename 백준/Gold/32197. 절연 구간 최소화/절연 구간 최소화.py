import sys
input = sys.stdin.readline

n,m = map(int, input().split())
graph = [[] for _ in range(n+1)]

for _ in range(m):
    s,e,t = map(int, input().split())
    graph[s].append((e, t))
    graph[e].append((s, t))

a, b = map(int, input().split())

import heapq
pq = []
heapq.heappush(pq, (0, a, -1))
vis = [[123456789]*(n+1),[123456789]*(n+1)]
while len(pq) != 0:
    cnt, cur, ad = heapq.heappop(pq)
    if cur == b:
        print(cnt)
        break
    
    for nxt, w in graph[cur]:
        if vis[w][nxt] <= cnt:
            continue
        if ad == -1:
            vis[w][nxt] = cnt
            heapq.heappush(pq, (cnt, nxt, w))
        elif ad == w:
            vis[w][nxt] = cnt
            heapq.heappush(pq, (cnt, nxt, w))
        elif ad != w:
            vis[w][nxt] = cnt+1
            heapq.heappush(pq, (cnt+1, nxt, w))