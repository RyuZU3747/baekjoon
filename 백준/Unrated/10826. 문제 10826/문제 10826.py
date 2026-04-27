n = int(input())
a=0
b=1
ans=0
for i in range(0,n+1):
    ans = a
    a=b
    b=ans+b
print(ans)