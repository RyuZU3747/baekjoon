#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int main(){
	unsigned long long int n;
	cin>>n;
	int ans;
	for(int i=64;n>1;i--){
		if(n%2==1){
			ans = i;
			break;
		}
		n /= 2;
	}
	cout<<ans;
}