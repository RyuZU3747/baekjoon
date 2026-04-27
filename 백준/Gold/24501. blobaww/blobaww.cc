#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

ll n,m,ans;
char esm[3005][3005];
int matsum[2][3005][3005];

int main(){
	scanf("%lld %lld",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) scanf(" %1c", &esm[i][j]);
	}
	
	if(esm[0][0]=='E') matsum[0][0][0]=1;
	else if(esm[0][0]=='M') matsum[1][0][0]=1;
	
	for(int i=1;i<n;i++){
		if(esm[i][0]=='E') matsum[0][i][0]=matsum[0][i-1][0]+1;
		else matsum[0][i][0]=matsum[0][i-1][0];
		if(esm[i][0]=='M') matsum[1][i][0]=matsum[1][i-1][0]+1;
		else matsum[1][i][0]=matsum[1][i-1][0];
	}
	for(int i=1;i<m;i++){
		if(esm[0][i]=='E') matsum[0][0][i]=matsum[0][0][i-1]+1;
		else matsum[0][0][i]=matsum[0][0][i-1];
		if(esm[0][i]=='M') matsum[1][0][i]=matsum[1][0][i-1]+1;
		else matsum[1][0][i]=matsum[1][0][i-1];
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<m;j++){
			if(esm[i][j]=='E') matsum[0][i][j]=matsum[0][i-1][j]+matsum[0][i][j-1]-matsum[0][i-1][j-1]+1;
			else matsum[0][i][j]=matsum[0][i-1][j]+matsum[0][i][j-1]-matsum[0][i-1][j-1];
			if(esm[i][j]=='M') matsum[1][i][j]=matsum[1][i-1][j]+matsum[1][i][j-1]-matsum[1][i-1][j-1]+1;
			else matsum[1][i][j]=matsum[1][i-1][j]+matsum[1][i][j-1]-matsum[1][i-1][j-1];
		}
	}
	ans=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(esm[i][j]=='S'){
				ans += ((long long int)matsum[0][i][j]*(matsum[1][n-1][m-1]+matsum[1][i-1][j-1]-matsum[1][n-1][j-1]-matsum[1][i-1][m-1]));
				ans%=MOD;
			}
		}
	}
	printf("%lld",ans);
}