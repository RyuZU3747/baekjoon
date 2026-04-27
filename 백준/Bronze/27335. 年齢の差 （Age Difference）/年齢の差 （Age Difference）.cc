#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000003
#define pii pair<int, int>
#define pll pair<ll, ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int n;cin>>n;
    vector<int> a(n);
    for(auto &e: a) cin>>e;
    int mn = *min_element(a.begin(), a.end());
    int mx = *max_element(a.begin(), a.end());
    for(auto e: a){
        cout<<max(abs(e-mn), abs(e-mx))<<'\n';
    }
}