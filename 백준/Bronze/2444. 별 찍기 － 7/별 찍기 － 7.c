#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n-1;j++){
			printf(" ");
		}
		for(int j=0;j<2*i+1;j++){
			printf("*");
		}
		printf("\n");
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			printf(" ");
		}
		for(int j=0;j<2*(n-i)-1;j++){
			printf("*");
		}
		printf("\n");
	}
}