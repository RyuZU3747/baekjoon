#include <bits/stdc++.h>
#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Min(a, b) ((a) < (b) ? (a) : (b))
#define ll unsigned long long
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

int main() {
  ll a, b;
  while(1){
  scanf("%lld %lld", &a, &b);
    if(a==0&&b==0) return 0;
if(pow(b,a,a)!=b) printf("no\n");

    else{if (mrsosu(a,2)&&mrsosu(a,7)&&mrsosu(a,61)) printf("no\n");
      else printf("yes\n");
      }
    }
  }