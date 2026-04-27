#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define pll pair<ll,ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

vector<int> graph[200001];
int vis[200001];
int ans[200001];

int main(){
    FASTIO;
    int n;cin>>n;
    for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        while(a!=0){
            graph[i].push_back(a);
            cin>>a;
        }
    }
    memset(ans, -1, sizeof ans);
    queue<int> q;
    int m;cin>>m;
    for(int i=0;i<m;i++){
        int a;cin>>a;
        q.push(a);
        vis[a] = 1;
        ans[a] = 0;
    }
    int t = 0;
    while(!q.empty()){
        t++;
        vector<int> chk;
        while(!q.empty()){
            int cur = q.front();
            q.pop();
            for(auto nxt: graph[cur]){
                if(vis[nxt]==1) continue;
                int cnt = 0;
                for(auto nei: graph[nxt]) if(vis[nei]) cnt++;
                if(cnt*2 >= graph[nxt].size()){
                    chk.push_back(nxt);
                    ans[nxt] = t;
                }
            }
        }
        for(auto ad: chk){
            vis[ad] = 1;
            q.push(ad);
        }
    }
    for(int i=1;i<=n;i++) cout<<ans[i]<<' ';
}