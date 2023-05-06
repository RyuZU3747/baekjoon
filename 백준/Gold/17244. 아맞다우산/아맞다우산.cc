#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int n,m;
string mp[51];
int dx[4] = {0,0,1,-1};
int dy[4] = {-1,1,0,0};

ll bfs(pii st, pii go){
    queue<pair<pii, int>> q;
    map<pii, int> vis;
    q.push({st, 0});
    vis[st] = 1;
    while(!q.empty()){
        pii cur = q.front().first;
        int len = q.front().second;
        q.pop();
        if(cur.first == go.first&&cur.second == go.second){
            return len;
        }
        for(int i=0;i<4;i++){
            pii nxt = {cur.first + dx[i], cur.second + dy[i]};
            if(nxt.first >= 0 &&nxt.first<=m && nxt.second>=0&&nxt.second<=n&&vis[nxt]==0&&mp[nxt.first][nxt.second]!='#'){
                vis[nxt] = 1;
                q.push({nxt,len+1});
            }
        }
    }
    return 1234567890;
}

int main(){
    cin>>n>>m;
    vector<pii> item;
    pii st;
    pii ed;
    for(int i=0;i<m;i++){
        cin>>mp[i];
        for(int j=0;j<n;j++){
            if(mp[i][j]=='X') item.push_back({i,j});
            if(mp[i][j]=='S') st = {i,j};
            if(mp[i][j]=='E') ed = {i,j};
        }
    }
    vector<int> order;
    for(int i=1;i<=item.size();i++) order.push_back(i);
    ll ans = 1234567890;
    do{
        pii cur = st;
        ll tmp = 0;
        for(int i=0;i<order.size();i++){
            pii nxt = item[order[i]-1];
            tmp += bfs(cur, nxt);
            cur = nxt;
        }
        tmp += bfs(cur, ed);
        ans = min(ans,tmp);
    }while(next_permutation(order.begin(),order.end()));
    cout<<ans;
}