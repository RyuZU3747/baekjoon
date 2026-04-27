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
    int n;cin>>n;
    vector<ll> rad(n);
    vector<int> perm(n);
    for(auto &x:rad) cin>>x;
    for(int i=0;i<n;i++) perm[i] = i;
    double ans = 1234567890123456789.0;
    do{
        double len = 0;
        vector<double> xcord(1,0);
        for(int i=1;i<n;i++){
            double cx = 0;
            for(int j=0;j<i;j++){
                cx = max(cx, xcord[j] + 2*sqrt(rad[perm[i]] * rad[perm[j]]));
            }
            xcord.push_back(cx);
        }
        ans = min(ans, xcord.back());
    }while(next_permutation(perm.begin(), perm.end()));
    cout<<fixed;
    cout.precision(10);
    cout<<ans;
}