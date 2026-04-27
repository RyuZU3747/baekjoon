dp = [1,1,3]
for i in range(3,252):
  dp.append(dp[i-2]*2+dp[i-1])
while True:
  try:
    n = int(input())
    print(dp[n])
  except:
    break