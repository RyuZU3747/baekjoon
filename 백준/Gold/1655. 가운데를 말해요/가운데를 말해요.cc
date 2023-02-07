#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
	FASTIO;
	priority_queue<int> sm;
	priority_queue<int> bi;
	int n;cin>>n;
	int a;cin>>a;
	cout<<a<<'\n';
	if(n==1) return 0;
	int b;cin>>b;
	cout<<min(a,b)<<'\n';
	if(n==2) return 0;
	sm.push(min(a,b));
	bi.push(-max(a,b));
	for(int i=2;i<n;i++){
		int tmp;cin>>tmp;
		if(sm.top()>tmp) sm.push(tmp);
		else if(-bi.top()<tmp) bi.push(-tmp);
		else{
			if(sm.size()>bi.size()) bi.push(-tmp);
			else if(sm.size()<bi.size()) sm.push(tmp);
			else sm.push(tmp);
		}
		if(sm.size()>bi.size()+1){
			bi.push(-sm.top());
			sm.pop();
		}
		else if(sm.size()+1<bi.size()){
			sm.push(-bi.top());
			bi.pop();
		}
		if(sm.size()==bi.size()) cout<<min(sm.top(),-bi.top())<<'\n';
		else if(bi.size()>sm.size()) cout<<-bi.top()<<'\n';
		else cout<<sm.top()<<'\n';
	}
}