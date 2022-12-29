#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int main(){
	int arr[101][101];
	int x,y;
	cin>>y>>x;
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			int tmp;
			cin>>tmp;
			arr[i][j]+=tmp;
		}
	}
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			cout<<arr[i][j]<<' ';
		}
		cout<<'\n';
	}
}