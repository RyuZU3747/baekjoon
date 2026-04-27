#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int n,m;cin>>n>>m;
    vector<pii> arr;
    vector<int> ans;
    for(int i=0;i<m;i++){
        int a;cin>>a;
        arr.push_back({a,i});
        if(n<=a&&a<=n*2){
            cout<<1<<'\n';
            cout<<i+1<<'\n';
            exit(0);
        }
    }
    int sum = 0;
    for(auto e:arr){
        if(e.first>2*n) continue;
        sum+=e.first;
        ans.push_back(e.second);
        if(sum>=n) break;
    }
    cout<<ans.size()<<'\n';
    for(auto e:ans) cout<<e+1<<'\n';
}