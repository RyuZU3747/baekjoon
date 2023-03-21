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
	vector<int> a;
	for(int i=0;i<n;i++){
		int t;cin>>t;
		a.push_back(t);
	}
	if(next_permutation(a.begin(),a.end())) for(auto e: a) cout<<e<<' ';
	else cout<<-1;
}