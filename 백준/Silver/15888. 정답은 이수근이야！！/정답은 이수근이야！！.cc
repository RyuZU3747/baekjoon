#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	double x1,x2;
	scanf("%d %d %d",&a,&b,&c);
	if((b*b-4*a*c)<0) printf("둘다틀렸근");
	else if((b*b-4*a*c)==0) printf("둘다틀렸근");
	else{
		x1=(-b+sqrt(b*b-4*a*c))/(2*a);
		x2=(-b-sqrt(b*b-4*a*c))/(2*a);
		if((x1-(int)x1)!=0||(x2-(int)x2)!=0){
			printf("둘다틀렸근");
			return 0; 
		}
		int x11,x22;
		x11=(int)x1;
		x22=(int)x2;
		if(x11<0||x22<0) printf("정수근"); 
		else{
			for(int i=0;x11>2;i++){
				x11=x11/2;
			}
			for(int i=0;x22>2;i++){
				x22=x22/2;
			}
			if(x11%2==0&&x22%2==0)	printf("이수근"); 
			else printf("정수근");  
		}	
	}
}