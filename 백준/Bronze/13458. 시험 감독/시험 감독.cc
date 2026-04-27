#include <bits/stdc++.h>
#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Min(a, b) ((a) < (b) ? (a) : (b))
#define ll long long int
using namespace std;

int main(){
  ll n, a[1000001],b,c,cnt=0;
  scanf("%lld",&n);
  for(int i=0;i<n;i++) scanf("%lld",&a[i]);
  scanf("%lld %lld",&b,&c);
  for(int i=0;i<n;i++){
    a[i]-=b;
    cnt++;
    if(a[i]<=0) continue;
    if(a[i]%c) cnt+=(a[i]/c+1);
    else cnt+=a[i]/c;
  }
  printf("%lld",cnt);
}