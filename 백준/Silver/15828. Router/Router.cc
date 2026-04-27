#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

queue<int> q;

int main(){
	int n,a;
	scanf("%d",&n);
	while(1){
		scanf("%d",&a);
		if(a==-1) break;
		if(a==0) q.pop();
		else{
			if(q.size()<n) q.push(a);
		}
	}
	if(q.empty()) printf("empty");
	else{
		while(!q.empty()){
			printf("%d ",q.front());
			q.pop();
		}
	}
}