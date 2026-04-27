#include <stdio.h>

int main(){
	int sum=0,p;
	int n,c[100000],k[100000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		p=1;
		scanf("%d %d",&c[i],&k[i]);
		if(k[i]>=1){
			for(int j=0;j<k[i]-1;j++) p=(p*1)%(int)(1e9+7);
			sum=sum+(c[i]*k[i]*p)%(int)(1e9+7);
		}
	}
	printf("%d",sum);
}