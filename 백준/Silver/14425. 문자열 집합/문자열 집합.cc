#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int main(){
	unordered_set<string> set;
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		string tmp;
		cin>>tmp;
		set.insert(tmp);
	}
	int ans = 0;
	for(int i=0;i<m;i++){
		string tmp;
		cin>>tmp;
		if(set.find(tmp)!=set.end()) ans++;
	}
	cout<<ans;
}