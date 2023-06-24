#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int n,visited[1000001];
queue<pair<int,int>> q;

int main(){
	scanf("%d",&n);
	q.push(make_pair(n,0));
	visited[n]=1;
	while(!q.empty()){
		int su = q.front().first;
		int cnt = q.front().second;
		q.pop();
		if(su==1){
			printf("%d",cnt);
			break;
		}
		if(su%3==0&&visited[su/3]!=1){
			q.push(make_pair(su/3,cnt+1));
			visited[su/3]=1;
		}
		if(su%2==0&&visited[su/2]!=1){
			q.push(make_pair(su/2,cnt+1));
			visited[su/2]=1;
		}
		if(su>0&&visited[su-1]!=1){
			q.push(make_pair(su-1,cnt+1));
			visited[su-1]=1;
		}
	}
}