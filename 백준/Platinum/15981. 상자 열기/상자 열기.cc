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
    int t = n-1;
    int cnt = 0;
    while(t){
        t >>= 1;
        cnt++;
    }
    cout<<cnt<<'\n';
    vector<int> ans[cnt];
    for(int i=0;i<=n;i++){
        t = i;
        for(int c=0;c<cnt;c++){
            if((t>>c) & 1){
                ans[c].push_back(i);
            }
        }
    }
    for(int i=0;i<cnt;i++){
        cout<<ans[i].size()<<' ';
        for(auto e: ans[i]) cout<<e<<' ';
        cout<<'\n';
    }
}