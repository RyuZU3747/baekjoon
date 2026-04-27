#include <iostream>
#include <vector>
#include <queue>
#define ll long long int
#define MOD 1000000007
using namespace std;

vector<int> graph[300001];
queue<int> q;
int indegree[300001];


int main(){
    int n,m;cin>>n>>m;
	for(int i=0;i<m;i++){
        int x,y;cin>>x>>y;
		graph[x].push_back(y);
		indegree[y]++;
	}
	for(int i=0;i<n;i++){
		if(indegree[i]==0){
			q.push(i);
		}
	}
    while(!q.empty()){
		int cur = q.front();
		q.pop();
		for(int i=0;i<graph[cur].size();i++){
			int next = graph[cur][i];
			indegree[next]--;
			if(indegree[next]==0) q.push(next);
		}
	}
    int yes = 0;
    for(int i=0;i<n;i++){
        if(indegree[i] > 0) yes = 1;
    }
    cout<<yes;
}