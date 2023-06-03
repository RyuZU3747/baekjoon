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
	vector<int> ar;
	for(int i=0;i<n;i++){
		int a;cin>>a;
		ar.push_back(a);
	}
	int cha = ar[1]-ar[0];
	for(int i=1;i<n;i++){
		if(cha!=ar[i]-ar[i-1]){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES\n";
	for(auto e:ar) cout<<e<<' ';
	cout<<'\n';
	for(int i=0;i<n;i++) cout<<0<<' ';
}