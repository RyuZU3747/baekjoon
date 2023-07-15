#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
#define PI 3.1415926535
using namespace std;

int dx[9] = {0,0,-1,-1,-1,0,1,1,1};
int dy[9] = {0,-1,-1,0,1,1,1,0,-1};
int shdx[4] = {-1,0,1,0};
int shdy[4] = {0,-1,0,1};
vector<pii> sharkmv;
vector<pii> tmpsharkmv;
int mxeat;
int vis[5][5];
vector<array<int,3>> fish[5][5];

void sharkdfs(pii cur, int cnt, int dep){
    if(dep == 3){
        if(mxeat < cnt){
            mxeat = cnt;
            sharkmv = tmpsharkmv;
        }
        return;
    }
    for(int i=0;i<4;i++){
        int nx = cur.first + shdx[i];
        int ny = cur.second + shdy[i];
        if(nx>=1&&nx<=4&&ny>=1&&ny<=4){
            tmpsharkmv.push_back({nx,ny});
            if(vis[nx][ny] == 1){
                sharkdfs({nx,ny}, cnt, dep + 1);
            }
            else{
                vis[nx][ny] = 1;
                sharkdfs({nx,ny}, cnt+fish[nx][ny].size(), dep + 1);
                vis[nx][ny] = 0;
            }
            tmpsharkmv.pop_back();
        }
    }
    return;
}

int main(){
    FASTIO;
    int m,s;cin>>m>>s;
    int smell[5][5] = {0,};
    pii shark;
    for(int i=0;i<m;i++){
        int x,y,d;cin>>x>>y>>d;
        fish[x][y].push_back({x,y,d});
    }
    cin>>shark.first>>shark.second;
    while(s--){
        vector<array<int,3>> tmpfish[5][5];
        for(int i=1;i<=4;i++){
            for(int j=1;j<=4;j++) tmpfish[i][j] = fish[i][j];
        }
        vector<array<int,3>> newfish[5][5];
        for(int x=1;x<=4;x++){
            for(int y=1;y<=4;y++){
                for(auto cur:fish[x][y]){
                    int dir = cur[2];
                    int mv = 0;
                    int nx, ny;
                    for(int i=0;i<8;i++){
                        nx = x + dx[dir];
                        ny = y + dy[dir];
                        if(nx>=1&&nx<=4&&ny>=1&&ny<=4&&make_pair(nx,ny)!=shark&&smell[nx][ny]==0){
                            mv = 1;
                            break;
                        }
                        if(dir==1) dir = 8;
                        else dir--;
                    }
                    if(mv) newfish[nx][ny].push_back({nx,ny,dir});
                    else{
                        newfish[x][y].push_back({x,y,dir});
                    }
                }
            }
        }
        for(int i=1;i<=4;i++){
            for(int j=1;j<=4;j++) fish[i][j] = newfish[i][j];
        }
            
        mxeat = -1;
        memset(vis, 0, sizeof vis);
        tmpsharkmv.clear();
        sharkmv.clear();
        sharkdfs(shark, 0, 0);
        for(auto e:sharkmv){
            if(fish[e.first][e.second].size() > 0){
                fish[e.first][e.second].clear();
                smell[e.first][e.second] = 3;
            }
            shark.first = e.first;
            shark.second = e.second;
        }

        for(int i=1;i<=4;i++){
            for(int j=1;j<=4;j++){
                if(smell[i][j] > 0) smell[i][j]--;
            }
        }


        for(int i=1;i<=4;i++){
            for(int j=1;j<=4;j++){
                for(auto fishs:tmpfish[i][j]){
                    fish[i][j].push_back(fishs);
                }
            }
        }
    }
    int ans = 0;
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++){
            ans += fish[i][j].size();
        }
    }
    cout<<ans;
}