#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int ans;
int dr[4] = {0,0,1,-1};
int dc[4] = {1,-1,0,0};
string mp[5];
int cnt;
int sel[25];
vector<int> sidx;

int chk(){
    int cnt = 0;
    int vis[5][5] = {0,};
    for(auto e: sidx){
        int r = e/5;
        int c = e%5;
        vis[r][c] = 1;
        if(mp[r][c]=='S') cnt++;
    }
    if(cnt<4) return 0;
    queue<int> q;
    q.push(sidx[0]);
    while(!q.empty()){
        int r = q.front() / 5;
        int c = q.front() % 5;
        q.pop();
        for(int i=0;i<4;i++){
            int nr = r + dr[i];
            int nc = c + dc[i];
            if(nr < 0 || nr >=5 || nc < 0 || nc>=5 || vis[nr][nc]==0) continue;
            vis[nr][nc] = 0;
            q.push(nr*5+nc);
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(vis[i][j]==1) return 0;
        }
    }
    return 1;
}

void backtrac(int cur, int dep){
    if(dep==6){
        if(chk()) ans++;
        return;    
    }
    for(int i=cur;i<25;i++){
        sidx.push_back(i);
        backtrac(i+1, dep+1);
        sidx.pop_back();
    }
}

int main(){
    for(int i=0;i<5;i++) cin>>mp[i];
    for(int i=0;i<25;i++) sel[i] = i;
    for(int i=0;i<25;i++){
        sidx.push_back(i);
        backtrac(i+1, 0);
        sidx.pop_back();
    }
    cout<<ans;
}