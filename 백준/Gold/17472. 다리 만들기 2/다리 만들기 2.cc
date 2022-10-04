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

int root[11];
int mp[11][11];//세로 가로
int n,m;
int visited[11][11];
vector<iii> bri;

int find(int x){
    return root[x] = root[x] == x ? x : find(root[x]);
}

void Union(int x, int y){
    int fx = find(x);
    int fy = find(y);
    if(fx>fy) root[fx]=root[fy];
    else root[fy]=root[fx];
    return;
}

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
            if(nr>=0&&nr<n&&nc>=0&&nc<m&&visited[nr][nc]==0&&mp[nr][nc] != 0){
                visited[nr][nc] = 1;
                q.push(make_pair(nr,nc));
                mp[nr][nc] = cnt;
            }
        }
    }
}

void dfs(int st, int r,int c,int dir,int len){
        int nr = r + dr[dir];
        int nc = c + dc[dir];
        if(nr>=0&&nr<n&&nc>=0&&nc<m&&mp[nr][nc] != st){
            if(mp[nr][nc] != 0){
                bri.push_back(make_tuple(len, st, mp[nr][nc]));
                return;
            }
            dfs(st, nr, nc, dir, len+1);
            return;
        }
}

int main(){
    for(int i=0;i<11;i++){
        root[i]=i;
    }
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin>>mp[i][j];
    }
    //섬에 번호붙이기
    int cnt = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!visited[i][j]&&mp[i][j]!=0) bfsnum(i,j,cnt++);
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            visited[i][j] = 0;
        }
    }

    //섬간 다리 구하기
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(!visited[i][j]&&mp[i][j]!=0){
                for(int k=0;k<4;k++) dfs(mp[i][j],i,j,k,0);
            }
        }
    }
    sort(bri.begin(), bri.end());

    int ans = 0;
    for(int i=0;i<bri.size();i++){
        int w = get<0>(bri[i]);
        int from = get<1>(bri[i]);
        int to = get<2>(bri[i]);
        if(find(from)!=find(to)&&w>=2){
            Union(from,to);
            ans += w;
        }
    }
    for(int i=2;i<cnt;i++){
        if(find(1)!=find(i)) ans = 0;
    }
    if(ans) cout<<ans;
    else cout<<-1;
}
