#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
int main(){
	int n;
	long long int t[36];
	scanf("%d",&n);
	for(int i=0;i<36;i++) t[i]=0;
	t[0]=1;
	t[1]=1;
	t[2]=2;
	for(int i=3;i<=n;i++){
		for(int j=0;j<i;j++){
			t[i]+=t[j]*t[i-j-1];
		}
	}
	printf("%lld",t[n]);
}