#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
int main(){
	int x,lev=1,up,down;
	scanf("%d",&x);
	int tmp=x;
	if(x==1){
		printf("1/1");
		return 0;
	}
	for(;;){
		if(tmp<=lev)break;
		tmp-=lev;
		lev++;
	}
	if(lev&1){
		up=lev;
		down=1;
		for(int i=1;i<tmp;i++){
			up--;
			down++;
		}
		printf("%d/%d",up,down);
	}
	else{
		up=1;
		down=lev;
		for(int i=1;i<tmp;i++){
			up++;
			down--;
		}
		printf("%d/%d",up,down);
	}
}