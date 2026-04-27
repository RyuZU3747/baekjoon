import sys
from collections import Counter
input = sys.stdin.readline

t = int(input())
for _ in range(t):
    n = int(input())
    s = Counter(input().split())
    ss = Counter(input().split())
    print('CHEATER' if s != ss else 'NOT CHEATER')
