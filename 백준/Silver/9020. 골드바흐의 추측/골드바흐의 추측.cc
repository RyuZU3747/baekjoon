#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
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
	int t, n;
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		for(int i=n/2;i>1;i--){
			if(mrsosu(i,2)&&mrsosu(i,7)&&mrsosu(i,61)){
				if(mrsosu(n-i,2)&&mrsosu(n-i,7)&&mrsosu(n-i,61)){
					printf("%d %d\n",i,n-i);
					break;	
				}
			}
		}
	}
}