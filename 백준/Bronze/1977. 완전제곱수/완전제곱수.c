#include <stdio.h>
#include <math.h>
int main(){
	int m,n,sum=0;
	scanf("%d %d",&m,&n);
	int min = n+1;
	for(int i=1;i<=sqrt(n);i++){
		if(i*i>=m&&i*i<=n){
			sum+=i*i;
			if(i*i<=min) min = i*i;
		}
	}
	if(sum==0){
		printf("-1");
	}
	else printf("%d\n%d",sum,min);
}