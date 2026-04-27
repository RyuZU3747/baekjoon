#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
	FASTIO;
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		int len = s.length();
		int par = ceil(len/3.0);
		string ss;
		string rev;
		string tail;
		string tarev;
		for(int i=0;i<par;i++) ss += s[i];
		for(int i=1;i<par;i++) tail += s[i];
		for(int i=par-1;i>=0;i--) rev += s[i];
		for(int i=1;i<par;i++) tarev += rev[i];
		string t1 = ss + rev + ss;
		string t2 = ss + rev + tail;
		string t3 = ss + tarev + ss;
		string t4 = ss + tarev + tail;
		if(s==t1||s==t2||s==t3||s==t4) cout<<1<<'\n';
		else cout<<0<<'\n';
	}
}