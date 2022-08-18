#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);

/*------------------------------------------------------------*/

char mp[52][52];
int a,b,ans=-1;
int visited[52][52];
queue<iii> q;//r,c,l
int dr[4] = {0,0,-1,1};
int dc[4] = {1,-1,0,0};

void bfs(int r, int c){
    for(int i=0;i<52;i++) for(int j=0;j<52;j++) visited[i][j]=0;
    visited[r][c]=1;
    q.push(make_tuple(r,c,0));
    while(!q.empty()){
        r = get<0>(q.front());
        c = get<1>(q.front());
        int l = get<2>(q.front());
        ans = max(ans,l);
        q.pop();
        for(int i=0;i<4;i++){
            int nr = r+dr[i];
            int nc = c+dc[i];
            if(nr>=0&&nr<a&&nc>=0&&nc<b&&mp[nr][nc]=='L'&&visited[nr][nc]==0){
                visited[nr][nc] = 1;
                q.push(make_tuple(nr,nc,l+1));
            }
        }
    }
}

int main(){
    cin>>a>>b;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++) cin>>mp[i][j];
    }
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++){
            if(mp[i][j]=='L') bfs(i,j);
        }
    }
    cout<<ans;
}