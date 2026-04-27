#include <bits/stdc++.h>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int N;
string board[27];
int visited[27][27];
int dr[4] = {0,0,1,-1};
int dc[4] = {1,-1,0,0};
vector<int> ans;

void bfs(int R, int C){
    int cnt = 0;
    queue<pair<int,int>> q;
    q.push({R,C});
    visited[R][C] = 1;
    while(!q.empty()){
        auto [r,c] = q.front();
        q.pop();
        cnt++;
        for(int i=0;i<4;i++){
            int nr = r + dr[i];
            int nc = c + dc[i];
            if(nr <= 0 || nr > N || nc <= 0 || nr > N) continue;
            if(visited[nr][nc]) continue;
            if(board[nr][nc] == '1'){
                visited[nr][nc] = 1;
                q.push({nr,nc});
            }
        }
    }
    ans.push_back(cnt);
}

int main(){
    FASTIO;
    cin>>N;
    for(int i=1;i<=N;i++){
        board[i] = '#';
        string a; cin>>a;
        board[i] += a;
    }

    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            if(visited[i][j]) continue;
            if(board[i][j] == '1'){
                bfs(i,j);
            }
        }
    }
    sort(ans.begin(), ans.end());
    cout<<ans.size()<<'\n';
    for(auto e: ans) cout<<e<<'\n';
}