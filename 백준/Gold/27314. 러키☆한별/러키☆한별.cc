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
int n,m;
string mp[100001];
vector<pii> ex;
set<pii> peo;
int hstp[101];
int j;

int bfs(pii st){
    int vis[n][m];
    memset(vis, 0, sizeof vis);
    int ans = 0;
    queue<pair<pii,int>> q;
    q.push({st,0});
    vis[st.first][st.second] = 1;
    while(!q.empty()){
        int cr = q.front().first.first;
        int cc = q.front().first.second;
        int cnt = q.front().second;
        if(peo.find({cr,cc})!=peo.end()){
            ans++;
        }
        if(hstp[j]<cnt){
            return ans;
        }
        q.pop();
        for(int i=0;i<4;i++){
            int nr = cr + dr[i];
            int nc = cc + dc[i];
            if(nr>=0&&nr<n&&nc>=0&&nc<m&&vis[nr][nc]==0&&mp[nr][nc]!='X'){
                vis[nr][nc] = 1;
                q.push({{nr,nc},cnt+1});
            }
        }
    }
    return ans;
}

int hbfs(pii st, pii ed){
    int vis[n][m];
    memset(vis, 0, sizeof vis);
    queue<pair<pii,int>> q;
    q.push({st,0});
    vis[st.first][st.second] = 1;
    while(!q.empty()){
        int cr = q.front().first.first;
        int cc = q.front().first.second;
        int cnt = q.front().second;
        q.pop();
        if(cr==ed.first&&cc==ed.second){
            return cnt;
        }
        for(int i=0;i<4;i++){
            int nr = cr + dr[i];
            int nc = cc + dc[i];
            if(nr>=0&&nr<n&&nc>=0&&nc<m&&vis[nr][nc]==0&&mp[nr][nc]!='X'){
                vis[nr][nc] = 1;
                q.push({{nr,nc},cnt+1});
            }
        }
    }
    return 1234567890;
}

int main(){
    FASTIO;
    cin>>n>>m;
    pii s;
    for(int i=0;i<n;i++){
        cin>>mp[i];
        for(int j=0;j<m;j++){
            if(mp[i][j]=='#') ex.push_back({i,j});
            else if(mp[i][j]=='P') peo.insert({i,j});
            else if(mp[i][j]=='H') s = {i,j};
        }
    }
    int expe[101] = {0,};//i번출구 사람수
    int ans = 0;
    for(int i=0;i<ex.size();i++){
        hstp[i] = hbfs(ex[i],s);
    }
    for(j=0;j<ex.size();j++){
        if(hstp[j]==1234567890) continue;
        int cur = bfs(ex[j]);
        ans = max(ans,cur);
    }
    cout<<ans;
}