#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
	int n;cin>>n;
	vector<string> a;
	int ok = 0;
	for(int i=0;i<n;i++){
		string t;cin>>t;
		a.push_back(t);
		if(t.compare("0")!=0) ok = 1;
	}
	sort(a.begin(),a.end(),[](string x, string y){return x+y > y+x;});
	if(ok==0) cout<<0;
	else{
		for(auto e:a) cout<<e;
	}
}