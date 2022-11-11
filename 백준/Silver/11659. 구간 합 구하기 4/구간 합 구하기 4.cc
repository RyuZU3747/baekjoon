#include <bits/stdc++.h>
#define ll long long
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/
int arr[100001],cusum[100001];

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		cusum[i] = cusum[i-1] + arr[i];
	}
	for(int i=0;i<m;i++){
		int a,b;cin>>a>>b;
		cout<<cusum[b] - cusum[a-1]<<'\n';
	}
}