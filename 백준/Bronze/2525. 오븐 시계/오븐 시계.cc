#include <stdio.h>

int main(){
	int h,m,r;
	scanf("%d %d %d",&h,&m,&r);
	m+=r;
	do{
		if(m>=60){
			h+=1;
			m-=60;
		}
		if(h==24) h=0;
	}while(m>=60);
	printf("%d %d",h,m);
}