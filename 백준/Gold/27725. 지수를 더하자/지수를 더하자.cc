#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    int sosu[200001];
    for(int i=0;i<n;i++) cin>>sosu[i];
    ll k;cin>>k;
    ll ans = 0;
    for(int i=0;i<n;i++){
        ll tmp = 1;
        while(tmp<=k){
            tmp *= sosu[i];
            ans += floor(1.0*k/tmp);
        }
    }
    cout<<ans;
}