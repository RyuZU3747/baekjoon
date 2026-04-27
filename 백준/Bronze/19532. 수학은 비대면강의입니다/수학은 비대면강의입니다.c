#include <stdio.h>

int main(){
	int a,b,c,d,e,f,x,y;
	int g1,h1;
	scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
	if(b==e){
		if(b==0) {
			x=c/a;
			y=(f-d*x)/e;
		}
		else{
		g1=a-d;
		h1=c-f;
		x=h1/g1;
		y=(c-a*x)/b;
		}
		printf("%d %d",x,y);
	}else{
		if(b==0) {
			x=c/a;
			y=(f-d*x)/e;
		}
		else
		{
		g1=a*e-d*b;
		h1=c*e-f*b;
		x=h1/g1;
		y=(c-a*x)/b;
		}
		printf("%d %d",x,y);
	}
}