#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int visited[1000001];
queue<int> q;

int main(){
	int f,s,g,u,d,cnt=0;
	scanf("%d %d %d %d %d",&f,&s,&g,&u,&d);
	for(int i=0;i<1000001;i++) visited[i] = -1;
	q.push(s);
	visited[s]=0;
	while(!q.empty()){
		int i = q.front();
		q.pop();
		if(i+u<=f&&visited[i+u]==-1){
			visited[i+u]=visited[i]+1;
			q.push(i+u);
		}
		if(i-d>0&&visited[i-d]==-1){
			visited[i-d]=visited[i]+1;
			q.push(i-d);
		}
	}
	if(visited[g]==-1) printf("use the stairs");
	else printf("%d",visited[g]);
}
