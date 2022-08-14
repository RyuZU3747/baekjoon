#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
//2477
/*------------------------------------------------------------*/

int visited[5][5];
queue<iii> q;//x,y,거리
int dr[4] = {0,0,1,-1};
int dc[4] = {1,-1,0,0};

int main(){
    int mp[5][5];
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>mp[i][j];
        }
    }
    int a,b;
    cin>>a>>b;
    //bfs
    q.push(make_tuple(a,b,0));
    visited[a][b] = 1;
    while(!q.empty()){
        int r = get<0>(q.front());
        int c = get<1>(q.front());
        int len = get<2>(q.front());
        q.pop();
        if(mp[r][c]==1){
            cout<<len;
            return 0;
        }
        for(int i=0;i<4;i++){
            int nr = r+dr[i];
            int nc = c+dc[i];
            if(nr>=0&&nr<5&&nc>=0&&nc<5&&visited[nr][nc]==0&&mp[nr][nc]!=-1){
                visited[nr][nc]=1;
                q.push(make_tuple(nr,nc,len+1));
            }
        }
    }
    cout<<"-1";
}