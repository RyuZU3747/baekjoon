#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    ll n;cin>>n;
    ll t = 1;
    ll ans = 1;
    if(n==0){
        cout<<0;
        return 0;
    }
    while(t<n){
        ans++;
        t *= 2;
    }
    cout<<ans;
}