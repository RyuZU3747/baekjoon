#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

stack<char> st;

int main(){
	char susik[201], ans[201];
	int a=0;
	scanf("%s",susik);
	int len = strlen(susik);
	for(int i=0;i<len;i++){
		if(susik[i]>=65&&susik[i]<=90){
			ans[a]=susik[i];
			a++;
		}
		else{
			if(st.empty()) st.push(susik[i]);
			else if(susik[i]=='(') st.push(susik[i]);
			else if(susik[i]==')'){
				while(st.top()!='('){
					ans[a]=st.top();
					a++;
					st.pop();
				}
				st.pop();
			}
			else if(susik[i]=='*'||susik[i]=='/'){
				while(!st.empty()&&(st.top()=='*'||st.top()=='/')){
					if(st.top()=='(') break;
					ans[a]=st.top();
					a++;
					st.pop();
				}
				st.push(susik[i]);
			}
			else{
				while(!st.empty()&&st.top()!='('){
					ans[a]=st.top();
					a++;
					st.pop();
				}
				st.push(susik[i]);
			}
		}
	}
	while(!st.empty()){
		ans[a]=st.top();
		st.pop();
		a++;
	}
	for(int i=0;i<a;i++) printf("%c",ans[i]);
}