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

int dr[4] = {0,0,1,-1};
int dc[4] = {1,-1,0,0};
int mp[101][101];
int vis[101][101];

int main(){
    FASTIO;
    int _;cin>>_;
    while(_--){
        memset(mp, 0, sizeof mp);
        memset(vis, 0, sizeof vis);
        int h,w,o,f,sr,sc,er,ec;cin>>h>>w>>o>>f>>sr>>sc>>er>>ec;
        for(int i=0;i<o;i++){
            int a,b,c;cin>>a>>b>>c;
            mp[a][b] = c;
        }
        queue<array<int,3>> q;
        q.push({sr,sc,f});
        vis[sr][sc] = 1;
        int ok = 0;
        while(!q.empty()){
            auto [cr,cc,po] = q.front();
            q.pop();
            if(cr==er && cc==ec){
                cout<<"잘했어!!\n";
                ok = 1;
                break;
            }
            if(po==0) continue;
            for(int i=0;i<4;i++){
                int nr = cr + dr[i];
                int nc = cc + dc[i];
                int hei = max(0, mp[nr][nc] - mp[cr][cc]);
                if(hei > po) continue;
                if(nr<1||nr>h||nc<1||nc>w||vis[nr][nc]==1) continue;
                vis[nr][nc] = 1;
                q.push({nr,nc,po-1});
            }
        }
        if(ok) continue;
        cout<<"인성 문제있어??\n";
    }
}