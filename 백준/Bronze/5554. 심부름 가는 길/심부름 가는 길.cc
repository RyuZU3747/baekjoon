#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
int main(){
	int x, y, su, sum=0;
	for(int i=0;i<4;i++){
		scanf("%d",&su);
		sum+=su;
	}
	x=sum/60;
	y=sum%60;
	printf("%d\n%d",x,y);
}