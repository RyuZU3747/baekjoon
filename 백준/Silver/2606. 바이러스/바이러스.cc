#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int connect[102][102];
int infect[102];
int n,ans,su;
void func(int i){
		for(int j=1;j<=n;j++){
			if(infect[j]==0&&connect[i][j]==1){
				infect[j]=1;
				func(j);
			}
		}
	return;
}

int main(){
	int a,b;
	scanf("%d",&n);
	if(n==1){
		printf("0");
		return 0;
	}
	scanf("%d",&su);
	for(int i=0;i<su;i++){
		scanf("%d %d",&a,&b);
		connect[a][b]=1;
		connect[b][a]=1;
	}
	func(1);
	for(int i=1;i<=n;i++){
		if(infect[i]==1) ans++;
	}
	printf("%d",ans-1);
}