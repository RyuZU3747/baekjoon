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

int dr[4] = {0,0,1,-1};
int dc[4] = {1,-1,0,0};

int main(){
    FASTIO;
    while(1){
        int h,w;cin>>h>>w;
        if(h==0 && w==0) break;
        string key[51];
        for(int i=0;i<h;i++){
            cin>>key[i];
        }
        string typ;cin>>typ;
        ll ans = 0;
        pii cur = {0,0};
        for(auto e: typ){
            int vis[51][51]{0,};
            queue<array<int,3>> q;
            q.push({cur.first, cur.second, 1});
            vis[cur.first][cur.second] = 1;
            while(!q.empty()){
                auto [cr,cc,len] = q.front();
                q.pop();
                if(key[cr][cc] == e){
                    ans += len;
                    cur = {cr,cc};
                    break;
                }
                for(int i=0;i<4;i++){
                    int nr = cr + dr[i];
                    int nc = cc + dc[i];
                    if(nr<0||nr>=h||nc<0||nc>=w||vis[nr][nc]) continue;
                    vis[nr][nc] = 1;
                    q.push({nr,nc,len+1});
                }
            }
        }
        cout<<ans<<'\n';
    }
}