#include <stdio.h>

int main(){
	int t,a=0,b=0,c=0;
	scanf("%d",&t);
	for(;t>9;){
		if(t>=300){
			t-=300;
			a++;
		}
		else if(t>=60){
			t-=60;
			b++;
		}
		else if(t>=10){
			t-=10;
			c++;
		}
	}
		if(t==0){
			printf("%d %d %d",a,b,c);
			return 0;
		}	
		else{
			printf("-1");
		}
}