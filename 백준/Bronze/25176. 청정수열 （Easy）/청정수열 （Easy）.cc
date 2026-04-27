#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int main(){
	int n;
	cin>>n;
	int ans = 1;
	for(int i=1;i<=n;i++) ans*=i;
	cout<<ans;
}