#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int main(){
	int n,m,cur[1001]={0,},past[1001]={0,};
	cin>>n>>m;
	for(int i=0;i<n;i++) cin>>cur[i];
	for(int i=0;i<m;i++) cin>>past[i];
	int len = Max(n,m);
	int mx = 0;
	for(int i=0;i<len;i++){
		mx = Max(mx,past[i]-cur[i]);
	}
	cout<<mx;
}