#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

string maze[8];
int vis[1<<8][1<<8][8][8];
int dr[4] = {0,0,1,-1};
int dc[4] = {1,-1,0,0};
int n,m;

int rotmaze(pii but, pii from, pii to){
	string tmpmaze[8];
	if(maze[from.first][from.second]=='B' || maze[to.first][to.second]=='B') return 0;

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) tmpmaze[i] += maze[i][j];
	}
	
	for(int i=0;i<m;i++){
		if(!(but.second & (1<<i))) continue;
		for(int j=0;j<n;j++){
			if(tmpmaze[j][i]=='C'){
				tmpmaze[j][i] = 'D';
			}
			else if(tmpmaze[j][i]=='D'){
				tmpmaze[j][i] = 'C';
			}
		}
	}
	for(int i=0;i<n;i++){
		if(!(but.first & (1<<i))) continue;
		for(int j=0;j<m;j++){
			if(tmpmaze[i][j]=='C'){
				tmpmaze[i][j] = 'D';
			}
			else if(tmpmaze[i][j]=='D'){
				tmpmaze[i][j] = 'C';
			}
		}
	}
	
	if(from.first == to.first){
		if(tmpmaze[from.first][from.second]=='C' || tmpmaze[to.first][to.second]=='C') return 0;
		return 1;
	}
	if(from.second == to.second){
		if(tmpmaze[from.first][from.second]=='D' || tmpmaze[to.first][to.second]=='D') return 0;
		return 1;
	}
	return 1;
}

int main(){
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>maze[i];
	}
	queue<array<int,4>> q;
	memset(vis, -1, sizeof vis);
	pii end = {n-1,m-1};
	q.push({0,0,0,0});
	vis[0][0][0][0] = 0;
	while(!q.empty()){
		pii but = {q.front()[0],q.front()[1]};
		pii cur = {q.front()[2],q.front()[3]};
		q.pop();
		
		if(cur == end){
			cout<<vis[but.first][but.second][cur.first][cur.second];
			return 0;
		}
		for(int i=0;i<4;i++){
			int nr = cur.first + dr[i];
			int nc = cur.second + dc[i];
			if(nr>=0&&nr<n&&nc>=0&&nc<m&&vis[but.first][but.second][nr][nc]==-1){
				if(rotmaze(but,cur,{nr,nc})){
					vis[but.first][but.second][nr][nc] = vis[but.first][but.second][cur.first][cur.second] + 1;
					q.push({but.first, but.second, nr, nc});
				}
			}
		}
		pii nbut = {but.first ^ (1<<cur.first), but.second ^ (1<<cur.second)};
		if(vis[nbut.first][nbut.second][cur.first][cur.second]==-1){
			vis[nbut.first][nbut.second][cur.first][cur.second] = vis[but.first][but.second][cur.first][cur.second] + 1;
			q.push({nbut.first, nbut.second, cur.first, cur.second});
		}

	}
	cout<<-1;
}