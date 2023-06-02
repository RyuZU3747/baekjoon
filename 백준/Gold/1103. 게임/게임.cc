#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int dr[4] = {0,0,1,-1};
int dc[4] = {1,-1,0,0};
map<pii, int> vis;
string mp[51];
int n,m;
int ans = 0;
int dp[51][51];

int dfs(pii cur){
    int & ret = dp[cur.first][cur.second];
    if(ret!=0) return ret;
    for(int i=0;i<4;i++){
        unsigned int nr = cur.first + dr[i]*(mp[cur.first][cur.second]-'0');
        unsigned int nc = cur.second + dc[i]*(mp[cur.first][cur.second]-'0');
        if(vis[{nr,nc}]==1){
            cout<<-1;
            exit(0);
        }
        if(nr<n && nc<m && mp[nr][nc]!='H'){
            vis[{nr,nc}] = 1;
            ret = max(ret, dfs({nr,nc})+1);
            vis[{nr,nc}] = 0;
        }
    }
    if(ret==1) return 1;
    return ret;
}

int main(){
    cin>>n>>m;
    for(int i=0;i<n;i++) cin>>mp[i];
    vis[{0,0}] = 1;
    cout<<dfs({0,0})+1;
}