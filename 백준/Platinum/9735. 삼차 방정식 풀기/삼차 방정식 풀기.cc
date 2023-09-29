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
    int _;cin>>_;
    while(_--){
        double a,b,c,d;cin>>a>>b>>c>>d;
        double id;
        for(ll i=-1000000;i<=1000000;i++){
            ll cal = a * i*i*i + b*i*i + c*i + d;
            if(cal == 0){
                id = i;
                break;
            }
        }
        double na = a;
        double nb = b+a*id;
        double nc = c;
        if(id!=0) nc = -d/id;
        double mans = (-nb-sqrt(nb*nb - 4.0*na*nc)) / (2*na);
        double pans = (-nb+sqrt(nb*nb - 4.0*na*nc)) / (2*na);
        vector<double> ans;
        ans.push_back(id);
        if(ans.back() != mans) ans.push_back(mans);
        if(ans.back() != pans && id != pans) ans.push_back(pans);
        sort(ans.begin(),ans.end());
        cout<<fixed;
        cout.precision(4);
        for(auto e: ans){
            cout<<e<<' ';
        }
        cout<<'\n';
    }
}