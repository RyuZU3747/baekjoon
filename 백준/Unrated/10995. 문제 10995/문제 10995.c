#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
int star(int n){
	for(int i=0;i<n;i++){
		printf("* ");
	}
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		if(i%2==0){
			star(n);
		}
		else{
			printf(" ");
			star(n);
		}
		printf("\n");
	}
}