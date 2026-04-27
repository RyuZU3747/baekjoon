#include <bits/stdc++.h>
#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Min(a, b) ((a) < (b) ? (a) : (b))
#define ll long long int
using namespace std;

ll pow(ll a, ll d, ll mod) {
  ll tmp = 1;
  a%=mod;
  while (d) {
    if(d%2) tmp = (tmp*a)%mod;
    a = (a*a)%mod;
    d/=2;
  }
  return tmp;
}

int mrsosu(ll a,int arr) {
  if (a == 1)
    return 0;
  if(a==2) return 1;
  if(a==arr) return 1;
  if (a % 2==0)
    return 0;
  if(a%arr==0)
    return 0;
  ll tmp = a - 1,rpow;
  while(1){
    ll rpow = pow(arr, tmp, a);
    if (rpow == a - 1) return 1;
    if(tmp%2) return (rpow ==1||rpow==a-1);
    tmp/=2;
    }
}

int main(){
  ll n;
scanf("%lld",&n);
if (mrsosu(n,2)&&mrsosu(n,7)&&mrsosu(n,61)){
printf("%lld",n-1);
return 0;}


    if(n==1||n==2    ){
      printf("1\n");
return 0;

      }
ll ans=n;
ll num=n;

    for(ll i=2;i*i<=n;i++){
      
      if(num%i==0){
      ans/=i;
      ans*=i-1;
        }
      while(num%i==0) num/=i;
    }
if(num!=1){
  ans/=num;
  ans*=num-1;
}
printf("%lld\n",ans);
  
}