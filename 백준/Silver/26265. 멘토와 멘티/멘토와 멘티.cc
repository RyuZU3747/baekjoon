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
    map<string,vector<string>> a;
    for(int i=0;i<n;i++){
        string x,y;cin>>x>>y;
        a[x].push_back(y);
    }
    for(auto x: a){
        sort(x.second.begin(),x.second.end());
        for(int i=x.second.size()-1;i>=0;i--) cout<<x.first<<' '<<x.second[i]<<'\n';
    }
}