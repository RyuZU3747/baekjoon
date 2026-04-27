#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int main(){
	int n;
	int arr[31]={0,};
	for(int i=1;i<=28;i++){		
		cin>>n;
		arr[n]=1;
	}
	for(int i=1;i<=30;i++) if(arr[i]==0) cout<<i<<'\n';
}