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

int dr[4] = {0,0,1,-1};
int dc[4] = {1,-1,0,0};
int visited[27];
int a,b,ans;
char mp[21][21];

void dfs(int r,int c,int l){
    ans = max(ans,l);
    for(int i=0;i<4;i++){
        int nr = r + dr[i];
        int nc = c + dc[i];
        if(nr>=0&&nr<a&&nc>=0&&nc<b&&visited[mp[nr][nc]-65]==0){
            visited[mp[nr][nc]-65]=1;
            dfs(nr,nc,l+1);
            visited[mp[nr][nc]-65]=0;
        }
    }
}

int main(){
    cin>>a>>b;
    for(int i=0;i<a;i++){
        for(int j=0;j<b;j++) cin>>mp[i][j];
    }
    visited[mp[0][0]-65]=1;
    dfs(0,0,1);
    cout<<ans;
}