#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll fastpow(ll a, ll x, ll m){
    ll ret = 1;
    while(x){
        if(x%2){
            ret = ret*a%m;
        }
        a =  a * a%m;
        x /= 2;
    }
    return ret;
}

int main(){
    ll m,sed,x1,x2;cin>>m>>sed>>x1>>x2;
    ll a = (((x2-x1+m)%m)*fastpow(x1-sed+m,m-2,m))%m;
    ll c = (x1 - ((a*sed)%m) + m )%m;
    cout<<a<<' '<<c;
}