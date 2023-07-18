#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int vis[3001][3001];
int dc[4] = {0,0,1,-1};
int dr[4] = {1,-1,0,0};
int n,m,k;

int main(){
    FASTIO;
    cin>>n>>m>>k;
    vector<pii> ant[3001];
    for(int i=0;i<k;i++){
        int a,b,c;cin>>a>>b>>c;
        ant[c].push_back({a-1,b-1});
    }
    queue<array<int, 3>> q;
    for(int e=3000;e>0;e--){
        for(auto el:ant[e]){
            q.push({el.first,el.second,e});
            vis[el.first][el.second] = 1;
        }
        for(int j = q.size();j>0;j--){
            int cr = q.front()[0];
            int cc = q.front()[1];
            int pow = q.front()[2];
            q.pop();
            if(pow == 0) continue;
            for(int i=0;i<4;i++){
                int nr = cr + dr[i];
                int nc = cc + dc[i];
                if(nr>=0&&nr<n&&nc>=0&&nc<m&&vis[nr][nc]==0){
                    vis[nr][nc] = 1;
                    q.push({nr,nc,pow-1});
                }
            }
        }
    }
    ll ans = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            //cout<<vis[i][j]<<' ';
            if(vis[i][j]!=0) ans++;
        }
        //cout<<'\n';
    }
    cout<<ans;
}