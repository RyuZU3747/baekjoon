#include <iostream>
#include <vector>
#include <tuple>
#define Min(a,b) ((a)<(b) ? (a):(b))
using namespace std;

int n,x,y,w,visited[10001],maxi,maxidx,tmp;

struct tree{
	int parent;
	int parw;
	vector<int> child;
	vector<int> weight;
}tree[10001];


void dfs(int s){
	if(visited[s]) return;
	visited[s]=1;
	if(maxi<tmp){
		maxi = tmp;
		maxidx = s;
	}
		if(tree[s].parent){
			tmp+=tree[s].parw;
			dfs(tree[s].parent);
			tmp-=tree[s].parw;
		}
	for(int i=0;i<tree[s].child.size();i++){
		if(tree[s].child[i]){
			tmp+=tree[s].weight[i];
			dfs(tree[s].child[i]);
			tmp-=tree[s].weight[i];
		}
	}
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n-1;i++){
		scanf("%d %d %d",&x,&y,&w);
		tree[y].parent=x;
		tree[y].parw=w;
		tree[x].child.push_back(y);
		tree[x].weight.push_back(w);
	}
	dfs(1);
	for(int i=0;i<10001;i++) visited[i]=0;
	tmp=0;
	maxi=0;
	dfs(maxidx);
	printf("%d",maxi);
}