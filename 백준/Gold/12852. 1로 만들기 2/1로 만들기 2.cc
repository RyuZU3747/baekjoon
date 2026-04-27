#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int n,visited[1000001];
queue<tuple<int,int,vector<int>>> q;
vector<int> tmp;

int main(){
	scanf("%d",&n);
	tmp.push_back(n);
	q.push(make_tuple(n,0,tmp));
	visited[n]=1;
	while(!q.empty()){
		int su = get<0>(q.front());
		int cnt = get<1>(q.front());
		auto arr = get<2>(q.front());
		q.pop();
		if(su==1){
			printf("%d\n",cnt);
			for(int i=0;i<arr.size();i++) printf("%d ",arr[i]);
			break;
		}
		if(su%3==0&&visited[su/3]!=1){
			arr.push_back(su/3);
			q.push(make_tuple(su/3,cnt+1,arr));
			visited[su/3]=1;
			arr.pop_back();
		}
		if(su%2==0&&visited[su/2]!=1){
			arr.push_back(su/2);
			q.push(make_tuple(su/2,cnt+1,arr));
			visited[su/2]=1;
			arr.pop_back();
		}
		if(su>0&&visited[su-1]!=1){
			arr.push_back(su-1);
			q.push(make_tuple(su-1,cnt+1,arr));
			visited[su-1]=1;
			arr.pop_back();
		}
	}
}