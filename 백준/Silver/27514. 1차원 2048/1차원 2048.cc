#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    map<ll, int> su;
    for(int i=0;i<n;i++){
        ll tmp;cin>>tmp;
        su[tmp]++;
    }
    ll ans = 1;
    for(ll i=1;i<=LLONG_MAX/2;i=i*2){
        while(su[i]>=2){
            su[i*2]++;
            su[i]-=2;
        }
        if(su[i*2]>0) ans = i*2;
    }
    cout<<ans;
}