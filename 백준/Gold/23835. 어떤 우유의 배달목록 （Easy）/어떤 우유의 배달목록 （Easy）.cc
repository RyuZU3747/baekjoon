#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<int,int>
#define pll pair<ll,ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

vector<int> graph[1001];
vector<pii> route;
int cost[1001];

void dfs(int cur, int ed, int bef, int su){
    if(cur==ed){
        for(auto e: route){
            cost[e.first] += e.second;
        }
        cost[cur] += su;
        return;
    }
    for(auto nxt: graph[cur]){
        if(nxt==bef) continue;
        route.push_back({cur, su});
        dfs(nxt, ed, cur, su+1);
        route.pop_back();
    }
}

int main(){
    FASTIO;
    int n;cin>>n;
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int q;cin>>q;
    while(q--){
        int a;cin>>a;
        if(a==1){
            int b,c;cin>>b>>c;
            dfs(b,c,0,0);
        }
        else{
            int b;cin>>b;
            cout<<cost[b]<<'\n';
        }
    }
}