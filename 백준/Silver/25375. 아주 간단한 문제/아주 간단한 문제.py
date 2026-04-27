import sys
input = sys.stdin.readline

q = int(input())
for _ in range(q):
    a, b = map(int, input().split())
    print(1 if a < b and b % a == 0 else 0)
