#include <stdio.h>

int main(){
	int h[3],b[2],hm=2000,bm=2000;
	scanf("%d %d %d %d %d",&h[0],&h[1],&h[2],&b[0],&b[1]);
	for(int i=0;i<3;i++) {
		if(h[i]<hm) hm=h[i];	
	}
	for(int i=0;i<2;i++){
		if(b[i]<bm) bm=b[i];
	}
	printf("%d",hm+bm-50);
}