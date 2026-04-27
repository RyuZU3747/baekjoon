#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    string s,t;cin>>s>>t;
    vector<ll> sidx;
    vector<ll> tidx;
    for(int i=0;i<n+m;i++){
        if(s[i]=='0') sidx.push_back(i);
        if(t[i]=='0') tidx.push_back(i);
    }
    ll difs = 0;
    for(int i=0;i<n;i++){
        difs += abs(sidx[i] - tidx[i]);
    }
    ll ans;
    if(difs%2==0){
        ans = difs/2;
        cout<<ans*ans*2;
    }
    else{
        ans = difs/2;
        ans *= ans;
        ans += (difs/2+1)*(difs/2+1);
        cout<<ans;
    }
}