#include <stdio.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
int main(){
	int s=0,m,x;
	char order[7];
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%s %d",order,&x);
		if(strcmp(order,"add")==0){
			s|=(1<<x);
		}
		else if(strcmp(order,"remove")==0){
			s&=~(1<<x);
		}
		else if(strcmp(order,"toggle")==0){
			s^=(1<<x);
		}
		else if(strcmp(order,"check")==0){
			if(s&(1<<x)) printf("1\n");
			else printf("0\n");
		}
		else if(strcmp(order,"all")==0){
			s|=(1<<22)-1;
		}
		else if(strcmp(order,"empty")==0){
			s=0;
		}
	}
}