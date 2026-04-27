#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int visited[100001];
int n,order[100001],sunser[100001];
int realdfs[100001];
vector<int> mat[100001];
int d;

bool cmp(int a, int b){return sunser[a]<sunser[b];}

void dfs(int x){
	if(visited[x]==1) return;
	visited[x]=1;
	realdfs[++d]=x;
	for(auto y: mat[x]){
		if(!visited[y]) dfs(y);
	}
}


int main(){
	scanf("%d",&n);
	for(int i=0;i<n-1;i++){
		int a,b;
		scanf("%d %d",&a,&b);
		mat[a].push_back(b);
		mat[b].push_back(a);
	}
	for(int i=1;i<=n;i++){
		scanf("%d",&order[i]);
		sunser[order[i]]=i;
	}
	for(int i=1;i<=n;i++) sort(mat[i].begin(),mat[i].end(),cmp);
	dfs(1);
	if(order[1]!=1){
		printf("0");
		return 0;
	}
	
	for(int i=1;i<=n;i++){
		if(realdfs[i]!=order[i]){
			printf("0");
			return 0;
		}
	}
	printf("1");
}