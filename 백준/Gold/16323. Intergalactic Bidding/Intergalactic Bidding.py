n, s = map(int, input().split())
arr = []
for i in range(n):
    name, su = map(str, input().split())
    arr.append([int(su), name])
arr.sort()
ans = []
cnt = 0
for su, name in arr[::-1]:
    if s >= su:
        s -= su
        ans.append(name)
        cnt += 1
    if s <= 0:
        break

if s != 0:
    print(0)
else:
    print(cnt)
    for a in ans:
        print(a)