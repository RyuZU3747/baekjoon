#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int dr[4] = {1,-1,0,0};
int dc[4] = {0,0,1,-1};

int main(){
	FASTIO;
	int t;cin>>t;
	while(t--){
		string m[3];
		map<pii, int> vis;
		vector<int> su;
		for(int i=0;i<3;i++) cin>>m[i];
		int n;cin>>n;
		for(int i=0;i<n;i++){
			int a;cin>>a;
			su.push_back(a);
		}
		vector<int> ans;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(m[i][j]=='X'||vis[{i,j}]==1||(i==1&&j==1)) continue;
				queue<pii> q;
				q.push({i,j});
				vis[{i,j}] = 1;
				int cnt = 1;
				while(!q.empty()){
					pii cur = q.front();
					q.pop();
					for(int i=0;i<4;i++){
						pii nxt = {dr[i]+cur.first, dc[i]+cur.second};
						if(nxt.first >= 0 &&nxt.first < 3 && nxt.second >= 0 && nxt.second < 3 &&vis[nxt]==0 && m[nxt.first][nxt.second] == 'O'){
							cnt++;
							vis[nxt] = 1;
							q.push(nxt);
						}
					}
				}
				ans.push_back(cnt);
			}
		}
		sort(ans.begin(),ans.end());
		int no = 0;
		if(ans.size()!=su.size()) no = 1;
		for(int i=0;i<min(ans.size(),su.size());i++){
			if(ans[i]!=su[i]) no = 1;
		}
		if(no) cout<<0<<'\n';
		else cout<<1<<'\n';
	}
}