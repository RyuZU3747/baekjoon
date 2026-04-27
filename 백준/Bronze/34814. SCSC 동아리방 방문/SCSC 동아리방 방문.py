import sys
input = sys.stdin.readline

n, m = map(int, input().split())
arr = [*map(int, input().split())]
for i in range(m):
    l, h = map(int, input().split())
    if arr[h-1] < max(arr):
        arr[l-1] -= 1
print(*arr)