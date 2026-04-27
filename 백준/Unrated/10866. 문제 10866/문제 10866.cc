#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

deque<int> q;

int main(){
	int n,x;
	char s[20];
	scanf("%d",&n);
	while(n--){
		scanf("%s",s);
		if(!strcmp(s,"push_front")){
			scanf("%d",&x);
			q.push_front(x);
		}
		else if(!strcmp(s,"push_back")){
			scanf("%d",&x);
			q.push_back(x);
		}
		else if(!strcmp(s,"pop_front")){
			if(q.empty()) printf("-1\n");
			else{
				printf("%d\n",q.front());
				q.pop_front();
			}
		}
		else if(!strcmp(s,"pop_back")){
			if(q.empty()) printf("-1\n");
			else{
				printf("%d\n",q.back());
				q.pop_back();
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