p, k = map(int, input().split())

o = 1
for i in range(2,k):
    if p%i==0:
        print("BAD", i)
        o = 0
        break

            
if o==1:
    print("GOOD")
    