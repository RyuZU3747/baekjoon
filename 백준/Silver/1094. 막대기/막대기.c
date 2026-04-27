#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
int main(){
	int x,st=0;
	scanf("%d",&x);
	for(;x>0;){
		if((x&1)==1) st++;
		x=x>>1;
	}
	printf("%d",st);
}