#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<ll,ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int vis[501][501][2][11];
int mp[501][501];
int dr[4] = {0,0,1,-1};
int dc[4] = {1,-1,0,0};

int main(){
    FASTIO;
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin>>mp[i][j];
    }
    queue<array<int,3>> q;
    q.push({0,0,0});
    vis[0][0][0][0] = 1;
    int ans = 0;
    while(!q.empty()){
        auto [cr,cc,cnt] = q.front();
        q.pop();
        int day = (cnt/m)%2;
        if(cr==n-1&&cc==n-1){
            if(!day) cout<<cnt/(2*m)+1<<" sun";
            else cout<<cnt/(2*m)+1<<" moon";
            ans = 1;
            break;
        }
        for(int i=0;i<4;i++){
            int nr = cr + dr[i];
            int nc = cc + dc[i];
            int nday = ((cnt+1)/m)%2;
            int walk = (cnt+1) % m;
            while(day == 1 && nr>=0&&nr<n&&nc>=0&&nc<n && mp[nr][nc]==1){
                nr += dr[i];
                nc += dc[i];
            }
            if(nr>=0&&nr<n&&nc>=0&&nc<n&&mp[nr][nc]==0&&vis[nr][nc][nday][walk]==0){
                vis[nr][nc][nday][walk] = 1;
                q.push({nr,nc,cnt+1});
            }
        }
    }
    if(!ans)cout<<-1;
}