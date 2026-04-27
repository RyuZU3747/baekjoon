#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int main(){
	int n,k,tmp[101],max=-90909090,sum;
	scanf("%d %d",&n,&k);
	for(int i=0;i<n;i++){
		scanf("%d",&tmp[i]);
	}
	for(int i=0;i<=n-k;i++){
		sum=0;
		for(int j=0;j<k;j++){
			sum+=tmp[i+j];
		}
		max=Max(max,sum);
	}
	printf("%d",max);
}