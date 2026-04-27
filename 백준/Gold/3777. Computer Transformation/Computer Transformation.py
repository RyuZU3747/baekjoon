arr = [0,0,1,1]
sum=2
for i in range(4,1001):
  if i%2==0:
    arr.append(sum+1)
    sum+=arr[i]
  else:
    arr.append(sum)
    sum+=arr[i]

while 1:
  try:
    n=int(input())
    print(arr[n])
  except:
    break