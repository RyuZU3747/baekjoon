#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int col[32], diag1[32], diag2[32], cnt, n;

void backtrac(int y){
	if(y==n){
		cnt++;
		return;
	}
	for(int x=0;x<n;x++){
		if(col[x]==1||diag1[x+y]==1||diag2[x-y+n-1]==1)continue;
		col[x]=1;
		diag1[x+y]=1;
		diag2[x-y+n-1]=1;
		backtrac(y+1);
		col[x]=0;
		diag1[x+y]=0;
		diag2[x-y+n-1]=0;
	}
}

int main(){
    cin>>n;
    backtrac(0);
    cout<<cnt;
}