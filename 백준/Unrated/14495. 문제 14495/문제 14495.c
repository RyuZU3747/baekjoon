#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	long long int fibobis[117];
	fibobis[1]=1;
	fibobis[2]=1;
	fibobis[3]=1;
	for(int i=4;i<=n;i++){
		fibobis[i]=fibobis[i-1]+fibobis[i-3];
	}
	printf("%lld",fibobis[n]);
}