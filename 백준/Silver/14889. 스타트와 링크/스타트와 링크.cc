#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int n;
int arr[21][21];
ll team;
int visited[21];
int mn = 1234567891;

int cal(){
	int sum = 0;
	for(int i=0;i<n;i++){
		if((team&(1LL<<i))==0) continue;
		for(int j=i+1;j<n;j++){
			if((team&(1LL<<j))==0) continue;
			sum += arr[i][j];
			sum += arr[j][i];
		}
	}
	return sum;
}


void backtrac(int su, int idx){
	if(su==n/2){
		int tmp = cal();
		team = ~team;
		tmp = tmp-cal();
		team = ~team;
		if(abs(tmp)<mn){
			mn=abs(tmp);
		}
		return;
	}
	for(int i=idx;i<n;i++){
		if(visited[i]==1) continue;
		team |= (1LL<<i);
		visited[i] = 1;
		backtrac(su+1,i);
		visited[i]=0;
		team &= ~(1LL<<i);
	}
}


int main(){
	cin>>n;
	for(int i=0;i<n;i++) for(int j=0;j<n;j++) cin>>arr[i][j];
	backtrac(0,0);
	cout<<mn;
}