#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

map<int,vector<int>> g;
int n,m;
queue<pii> q;
int visited[200001];
int color[200001];

int bi(){
    memset(visited, 0, sizeof visited);
    memset(color, 0, sizeof color);
    for(int i=1;i<=n;i++){
        if(visited[i]==1) continue;
        q = queue<pii>();
        q.push({i,1});
        visited[i] = 1;
        color[i] = 1;
        while(!q.empty()){
            int cur = q.front().first;
            int col = q.front().second;
            q.pop();
            for(auto n: g[cur]){
                if(visited[n]==1){
                    if(color[n]==col) return 0;
                    continue;
                }
                visited[n] = 1;
                if(col==1){
                    color[n] = 2;
                    q.push({n,2});
                }
                if(col==2){
                    color[n] = 1;
                    q.push({n,1});
                }
            }
        }
    }
    return 1;
}


int main(){
    int t;cin>>t;
    while(t--){
        g = map<int,vector<int>>();
        cin>>n>>m;
        for(int i=0;i<m;i++){
            int a,b;cin>>a>>b;
            g[a].push_back(b);
            g[b].push_back(a);
        }
        if(bi()==0){
            cout<<"NO\n";
        }
        else cout<<"YES\n";
    }
}