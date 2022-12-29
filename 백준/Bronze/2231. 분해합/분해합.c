#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		int val=i,sum=i;
		while(val!=0){
			sum = sum + val%10;
			val = val/10;
		}
		if(n==sum){
			printf("%d",i);
			return 0;
		}
	}
	printf("0");
}