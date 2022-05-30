#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long
#define MOD 10000

ll int n;
ll int a[2][2], ans[2][2], tmp[2][2], arr[2][2];

void multi(ll int a1[][2],ll int b[][2]){
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			tmp[i][j]=0;
			for(int k=0;k<2;k++){
				tmp[i][j]+=a1[i][k]*b[k][j];
			}
		}
	}
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++){
			a1[i][j]=tmp[i][j]%MOD;
		}
	}
}

void divide(ll int b){
	if(b==1) return;
	if(b!=1){
		divide(b/2);
		multi(a,a);
	}
	if(b%2==1){
		multi(a,arr);
		return;
	}
	else{
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++) ans[i][j]=a[i][j];
		}
	}
}

int main(){
	while(1){
		scanf("%lld",&n);
		if(n==-1) break;
		
		for(int i=0;i<2;i++){
			for(int j=0;j<2;j++){
				ans[i][j]=0;
				a[i][j]=0;
				tmp[i][j]=0;
				arr[i][j]=0;
			}
		}
		
		ans[0][0]=1;
		ans[1][1]=1;
		a[0][0]=1;
		a[0][1]=1;
		a[1][0]=1;
		arr[0][0]=1;
		arr[0][1]=1;
		arr[1][0]=1;

		while(n){
			if(n%2==1) multi(ans,a);
			multi(a,a);
			n/=2;
		}

		printf("%lld\n",ans[0][1]%MOD);
	}
}