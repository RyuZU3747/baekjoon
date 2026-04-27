#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    ll n;cin>>n;
    ll x = 0;
    ll a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f;
    ll st = n%f;
    for(ll i=n-st+1;i<=n;i++){
        if(i%a==0) x+=i;
        if(i%b==0) x%=i;
        if(i%c==0) x&=i;
        if(i%d==0) x^=i;
        if(i%e==0) x|=i;
        if(i%f==0) x>>=i;
    }
    cout<<x;
}