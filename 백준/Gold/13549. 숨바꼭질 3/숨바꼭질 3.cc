#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int visited[200001];
queue<int> q;

int main(){
	int s,g;
	scanf("%d %d",&s,&g);
	for(int i=0;i<100001;i++) visited[i] = -1;
	q.push(s);
	visited[s]=0;
	while(!q.empty()){
		int i = q.front();
		q.pop();
		if(i*2<=200000&&(visited[i*2]==-1||visited[i*2]>visited[i])){
			visited[i*2]=visited[i];
			q.push(i*2);
		}
		if(i+1<=g&&(visited[i+1]==-1||visited[i+1]>visited[i]+1)){
			visited[i+1]=visited[i]+1;
			q.push(i+1);
		}
		if(i-1>=0&&(visited[i-1]==-1||visited[i-1]>visited[i]+1)){
			visited[i-1]=visited[i]+1;
			q.push(i-1);
		}
	}
	printf("%d",visited[g]);
}
