m = int(input())
n = int(input())
sum = 0
min = n+1
for j in range(m,n+1):
  isp=1
  for i in range(2, int(j**0.5)+1):
    if j%i==0:
      isp=0
  if isp==1:
    if j<2:
      continue
    if j<min:
      min=j
    sum = sum+j
if min==n+1:
  print('-1')
else:
  print(sum)
  print(min)