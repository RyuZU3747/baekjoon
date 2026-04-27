#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/

int n;
int ar[101][101];
int ans[101][101];
int vis[101];

void dfs(int cur){
    for(int c=0;c<n;c++){
        if(ar[cur][c]==1&&vis[c]==0){
            vis[c] = 1;
            dfs(c);
        }
    }
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cin>>ar[i][j];
    }
    for(int i=0;i<n;i++){
        memset(vis,0,sizeof vis);
        dfs(i);
        for(int j=0;j<n;j++){
            ans[i][j] = vis[j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++) cout<<ans[i][j]<<' ';
        cout<<'\n';
    }
}