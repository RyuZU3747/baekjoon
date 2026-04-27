#include <stdio.h>

int main(){
	int n,m;
	while(scanf("%d %d",&n,&m) != EOF){
		int count=0;
		for(int i=n;i<=m;i++){
			if(i<10) count++;
			else if(i<100){
				if(i%10!=i/10) count++;
			}
			else if(i<1000){
				if(i/100==(i%100)/10||(i%100)/10==i%10||i/100==i%10) continue;
				else count++;
			}
			else{
				if(i/1000==(i%1000)/100||(i%1000)/100==(i%100)/10||(i%100)/10==i%10||i/1000==(i%100)/10||(i%1000)/100==i%10||i/1000==i%10) continue;
				else count++;
			}
		}
		printf("%d\n",count);
	}
}