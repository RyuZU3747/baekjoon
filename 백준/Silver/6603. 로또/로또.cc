#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int arr[13];
int visited[13];
vector<int> ans;

void backtrac(int n,int dep, int st){
	if(dep==6){
		for(int i=0;i<6;i++) cout<<ans[i]<<' ';
		cout<<'\n';
		return;
	}
	for(int i=st;i<n;i++){
		if(visited[i]) continue;
		visited[i]=1;
		ans.push_back(arr[i]);
		backtrac(n,dep+1,i);
		visited[i]=0;
		ans.pop_back();
	}
}

int main(){
	int k;
	while(1){
		cin>>k;
		if(k==0) break;
		for(int i=0;i<k;i++){
			cin>>arr[i];
		}
		backtrac(k,0,0);
		cout<<'\n';
	}
}