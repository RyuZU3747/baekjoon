#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;


stack<ll> solve;
stack<int> check;

int main(){
	char s[50];
	scanf("%s",s);
	int len = strlen(s);
	for(int i=0;i<len;i++){
		if(s[i]=='(') check.push(-2);
		else if(s[i]=='[') check.push(-3);
		else if(s[i]==')'){
			if(check.empty()){
				printf("0");
				return 0;
			}
			else if(check.top()!=-2){
				printf("0");
				return 0;
			}
			else check.pop();
		}
		else if(s[i]==']'){
			if(check.empty()){
				printf("0");
				return 0;
			}
			else if(check.top()!=-3){
				printf("0");
				return 0;
			}
			else check.pop();
		}
		else{
			printf("0");
			return 0;
		}
	}
	if(!check.empty()){
		printf("0");
		return 0;
	}
	
	for(int i=0;i<len;i++){
		if(s[i]=='(') solve.push(-2);
		else if(s[i]=='[') solve.push(-3);
		else if(s[i]==')'){
			ll tmp=0;
			if(s[i-1]=='('){
				solve.pop();
				solve.push(2);
			}
			else{
				while(solve.top()!=-2){
					tmp+=solve.top();
					solve.pop();
				}
				solve.pop();
				solve.push(tmp*2);
			}
		}
		else if(s[i]==']'){
			ll tmp=0;
			if(s[i-1]=='['){
				solve.pop();
				solve.push(3);
			}
			else{
				while(solve.top()!=-3){
					tmp+=solve.top();
					solve.pop();
				}
				solve.pop();
				solve.push(tmp*3);
			}
		}
	}
	ll ans = 0;
	while(!solve.empty()){
		ans+=solve.top();
		solve.pop();
	}
	printf("%lld",ans);
}