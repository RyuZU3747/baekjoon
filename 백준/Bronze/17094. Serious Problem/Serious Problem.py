import sys
input = sys.stdin.readline

n = int(input())
s = input()
ce, c2 = 0, 0
for e in s:
    if e == 'e':
        ce += 1
    elif e == '2':
        c2 += 1

print('2' if c2 > ce else 'e' if ce > c2 else 'yee')
