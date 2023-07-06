#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int mp[101][101];//세로 가로
int n;
int vis[101][101];
vector<iii> bri;
int ans = 1234657890;
int dr[4] = {-1,0,0,1};
int dc[4] = {0,1,-1,0};

void bfsnum(int r,int c, int cnt){
    queue<pii> q;
    q.push(make_pair(r,c));
    mp[r][c] = cnt;
    while(!q.empty()){
        int cr = q.front().first;
        int cc = q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nr = cr + dr[i];
            int nc = cc + dc[i];
            if(nr>=0&&nr<n&&nc>=0&&nc<n&&vis[nr][nc]==0&&mp[nr][nc] != 0){
                vis[nr][nc] = 1;
                q.push(make_pair(nr,nc));
                mp[nr][nc] = cnt;
            }
        }
    }
}

void bfs(int st, int sr,int sc){
    queue<array<int, 3>> q;
    q.push({sr,sc,0});
    vis[sr][sc] = 1;
    while(!q.empty()){
        int r = q.front()[0];
        int c = q.front()[1];
        int len = q.front()[2];
        q.pop();
        if(mp[r][c]!=0&&mp[r][c]!=st){
            ans = min(ans, len);
        }
        for(int i=0;i<4;i++){
            int nr = r + dr[i];
            int nc = c + dc[i];
            if(nr>=0&&nr<n&&nc>=0&&nc<n&&vis[nr][nc]==0){
                vis[nr][nc] = 1;
                if(mp[nr][nc]==0) q.push({nr,nc,len+1});
                else q.push({nr,nc,len});
            }
        }
    }
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin>>mp[i][j];
    }
    //섬에 번호붙이기
    int cnt = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(!vis[i][j]&&mp[i][j]!=0) bfsnum(i,j,cnt++);
        }
    }

    //섬간 다리 구하기
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            memset(vis, 0, sizeof vis);
            if(mp[i][j]!=0){
                bfs(mp[i][j],i,j);
            }
        }
    }
    cout<<ans;
}