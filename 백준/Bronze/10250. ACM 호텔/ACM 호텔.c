#include <stdio.h>

int main(){
	int t, H,W,N, f,b;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d %d %d",&H,&W,&N);
		if(N%H==0){
			f=H;
			b=N/H;	
		}
		else{
			f=N%H;
			b=N/H+1;
		}
		printf("%d%02d\n",f,b);
	}
}