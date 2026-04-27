#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int dr[4] = {0,0,1,-1};
int dc[4] = {1,-1,0,0};

int main(){
    int _;cin>>_;
    while(_--){
        int r,c;cin>>r>>c;
        string latte[11];
        int vis[11][11] = {0,};
        for(int i=0;i<r;i++) cin>>latte[i];
        function<void(pii)> bfs = [r,c,&vis,latte](pii st)->void{
            queue<pii> q;
            q.push(st);
            vis[st.first][st.second] = 1;
            while(!q.empty()){
                int cr = q.front().first;
                int cc = q.front().second;
                q.pop();
                for(int i=0;i<4;i++){
                    int nr = cr + dr[i];
                    int nc = cc + dc[i];
                    if(nr>=0&&nr<r&&nc>=0&&nc<c&&vis[nr][nc]==0&&latte[nr][nc]=='#'){
                        vis[nr][nc] = 1;
                        q.push({nr,nc});
                    }
                }
            }
        };
        int cnt = 0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(latte[i][j]=='#'&&vis[i][j]==0){
                    cnt++;
                    bfs({i,j});
                }
            }
        }
        if(cnt>1) cout<<0<<'\n';
        else{
            map<int,int> wid;
            map<int,int> hei;
            int chkw[11] = {0,};
            int chkh[11] = {0,};
            int cw = -1;
            int ch = -1;
            int no = 0;
            for(int i=0;i<r;i++){
                int w = 0;
                for(int j=0;j<c;j++){
                    if(w>0&&vis[i][j-1]==0&&vis[i][j]==1) no = 1;
                    if(vis[i][j]==1) w++;
                }
                if(w==0) continue;
                if(cw==-1) cw = w;
                else{
                    if(cw!=w){
                        if(chkw[w]==1) no = 1;
                        chkw[cw] = 1;
                        cw = w;
                    }
                }
                wid[w]++;
            }
            for(int i=0;i<c;i++){
                int h = 0;
                for(int j=0;j<r;j++){
                    if(h>0&&vis[j-1][i]==0&&vis[j][i]==1) no = 1;
                    if(vis[j][i]==1) h++;
                }
                if(h==0) continue;
                if(ch==-1) ch = h;
                else{
                    if(ch!=h){
                        if(chkh[h]==1) no = 1;
                        chkh[ch] = 1;
                        ch = h;
                    }
                }
                hei[h]++;
            }
            int cnt = 0;
            for(int i=1;i<=10;i++){
                if(wid[i]>0) cnt++;
            }
            if(cnt!=2) no = 1;
            for(int i=0;i<=10;i++){
                if(hei[i]!=wid[i]) no = 1;
            }
            if(no) cout<<0<<'\n';
            else cout<<1<<'\n';
        }
    }
}