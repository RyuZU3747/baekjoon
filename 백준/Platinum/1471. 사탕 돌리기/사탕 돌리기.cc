#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int dfsnum[200001];
int fin[200001];
vector<vector<int>> SCCs;
int cnt;
stack<int> st;
vector<int> graph[200001];
int sccnum[200001];
int scccnt = 0;
int indeg[200001];

int dfs(int cur){//도달할 수 있는 최대 조상을 리턴
    dfsnum[cur] = ++cnt;
    st.push(cur);

    int ret = dfsnum[cur];
    for(auto nxt: graph[cur]){
        if(dfsnum[nxt]==0) ret = min(ret, dfs(nxt));
        else if(fin[nxt]==0) ret = min(ret, dfsnum[nxt]);
    }
    if(ret == dfsnum[cur]){
        vector<int> tmp;
        while(1){
            int t = st.top();
            st.pop();
            tmp.push_back(t);
			sccnum[t] = scccnt;
            fin[t] = 1;
            if(t==cur) break;
        }
        sort(tmp.begin(),tmp.end());
        SCCs.push_back(tmp);
		scccnt++;
    }
    return ret;
}

vector<int> newgraph[200001];

int main(){
    FASTIO;
	int n;cin>>n;
	for(int i=1;i<=n;i++){
		int t = i;
		int s = 0;
		while(t){
			s += t%10;
			t /= 10;
		}
		s += i;
		if(s > n) s %= n;
		if(s == 0) s = n;
		graph[i].push_back(s);
	}
    for(int i=1;i<=n;i++) if(dfsnum[i]==0) dfs(i);
	
	int ans = 0;
	for(int i=1;i<=n;i++){
		if(sccnum[i]!=sccnum[graph[i][0]]){
			indeg[graph[i][0]]++;
			newgraph[i].push_back(graph[i][0]);
		}
	}

	queue<pii> q;
	for(int i=1;i<=n;i++){
		if(indeg[i]==0){
			q.push({i,SCCs[sccnum[i]].size()});
		}
	}

	while(!q.empty()){
		int cur = q.front().first;
		int sz = q.front().second;
		q.pop();
		ans = max(ans, sz);
		for(auto nxt: newgraph[cur]){
			int nsz = sz + SCCs[sccnum[nxt]].size();
			q.push({nxt, nsz});
		}
	}

	cout<<ans<<'\n';
}