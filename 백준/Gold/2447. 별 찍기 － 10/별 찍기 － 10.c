#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int star(int i, int j, int n){
	if((i/n)%3==1&&(j/n)%3==1){
		printf(" ");
		return 0;
	}
	if(n/3==0){
		printf("*");
		return 0;
	}
	star(i,j,n/3);
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			star(i,j,n);
		}
		printf("\n");
	}
}