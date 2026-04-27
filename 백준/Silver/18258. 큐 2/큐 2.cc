#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

queue<int> q;

int main(){
	int n,x;
	char s[7];
	scanf("%d",&n);
	while(n--){
		scanf(" %s",s);
		if(!strcmp(s,"push")){
			scanf("%d",&x);
			q.push(x);
		}
		else if(!strcmp(s,"pop")){
			if(q.empty()) printf("-1\n");
			else{
				printf("%d\n",q.front());
				q.pop();
			}
		}
		else if(!strcmp(s,"size")){
			printf("%ld\n",q.size());
		}
		else if(!strcmp(s,"empty")){
			if(q.empty()) printf("1\n");
			else printf("0\n");
		}
		else if(!strcmp(s,"front")){
			if(q.empty()) printf("-1\n");
			else{
				printf("%d\n",q.front());
			}
		}
		else{
			if(q.empty()) printf("-1\n");
			else{
				printf("%d\n",q.back());
			}
		}
	}
}