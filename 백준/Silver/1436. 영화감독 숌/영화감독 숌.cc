#include <stdio.h>

int main(){
	int n,count1=0,count2=0,num=665,tem;
	scanf("%d",&n);
	while(count2!=n){
		num++;
		tem=num;
		while(1){
			if(tem%10==6){
				count1++;
			}
			else if(count1<3){
				count1=0;
			}
			tem=tem/10;
			if(tem<=0)break;
		}
		if(count1>=3) count2++;
		if(count2==n) break;
		count1=0;
	}
	printf("%d",num);
}