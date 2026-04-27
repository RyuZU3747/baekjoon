#include <stdio.h>

int main(){
	int n,c=0;
	scanf("%d",&n);
	for(;n>0;){
		if(n%5==0){
			n-=5;
			c++;
		}
		else if(n%3==0) {
			n-=3;
			c++;
		}
		else if(n>=5){
			n-=5;
			c++;
		}
		else if(n<5&&n%3!=0&&n%5!=0) {
			c=-1;
			break;
	}
	}
		printf("%d",c);
}