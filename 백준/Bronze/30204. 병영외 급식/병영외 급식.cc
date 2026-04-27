#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<int,int>
#define pll pair<ll,ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int n,x;cin>>n>>x;
    int sum = 0;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        sum += a;
    }
    if(sum%x==0) cout<<1;
    else cout<<0;
}