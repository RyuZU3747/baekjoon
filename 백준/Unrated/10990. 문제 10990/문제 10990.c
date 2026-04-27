#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
//10990번
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=n-1;j>i;j--){
			printf(" ");
		}
		printf("*");
		for(int j=0;j<i*2-1;j++){
			printf(" ");
		}
		if(i!=0) printf("*");
		printf("\n");
	}
}