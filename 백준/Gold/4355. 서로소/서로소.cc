#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
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
    while(1){
        cin>>n;
        if(n==0) break;
        if (mrsosu(n,2)&&mrsosu(n,7)&&mrsosu(n,61)){
            printf("%lld\n",n-1);
            continue;
        }
        if(n==1){
            printf("0\n");
            continue;
        }
        if(n==2){
            printf("1\n");
            continue;
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
}