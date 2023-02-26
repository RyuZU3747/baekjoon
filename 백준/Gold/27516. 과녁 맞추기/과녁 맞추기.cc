#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

int main(){
    ll x,y;cin>>x>>y;
    int n;cin>>n;
    map<pii,int> tanr;
    map<pii,int> tanl;
    for(int i=0;i<n;i++){
        ll a,b;cin>>a>>b;
        if(a==x) continue;
        if(b>=y) continue;
        ll g = gcd(abs(b-y),abs((a-x)*(a-x)));
        if(x<a) tanr[{(b-y)/g,((a-x)*(a-x))/g}]++;
        else tanl[{(b-y)/g,((a-x)*(a-x))/g}]++;
    }
    int ans = 0;
    for(auto e: tanr){
        ans = max(ans,e.second);
    }
    for(auto e: tanl){
        ans = max(ans,e.second);
    }
    cout<<ans;
}