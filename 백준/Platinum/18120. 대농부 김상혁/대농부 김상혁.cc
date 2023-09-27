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
    int n,a;cin>>n>>a;
    vector<array<int,3>> nong(n);
    for(auto &x:nong) cin>>x[0]>>x[1]>>x[2];
    sort(nong.begin(),nong.end(),[](auto a, auto b){
        int ta = a[0] * a[0] + a[1] * a[1];
        int tb = b[0] * b[0] + b[1] * b[1];
        return ta < tb;
    });
    double ans = 0;
    double sw = 0;
    double sco = 0;
    for(int i=0;i<n;i++){
        sw += nong[i][2];
        sco += nong[i][2] * sqrt(nong[i][0] * nong[i][0] + nong[i][1] * nong[i][1]);
        double curr = sw/(2.0*a);
        double curv = sw*curr - sco - a*curr*curr;
        ans = max(ans, curv);
    }
    cout<<fixed;
    cout.precision(7);
    cout<<ans;
}