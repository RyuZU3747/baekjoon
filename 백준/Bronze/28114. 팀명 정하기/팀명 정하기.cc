#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    vector<pair<string, int>> peo;
    vector<int> su;
    for(int i=0;i<3;i++){
        int a, b;cin>>a>>b;
        string c;cin>>c;
        peo.push_back({c,a});
        su.push_back(b);
    }
    sort(su.begin(),su.end());
    sort(peo.begin(),peo.end(),[](pair<string, int> a, pair<string, int> b){return a.second > b.second;});
    for(auto e: su) cout<<e%100;
    cout<<'\n';
    for(auto e: peo) cout<<e.first[0];
}