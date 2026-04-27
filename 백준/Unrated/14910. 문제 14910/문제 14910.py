import sys
input = sys.stdin.readline

arr = [*map(int, input().split())]
brr = arr.copy()
brr.sort()
print('Good' if arr == brr else 'Bad')