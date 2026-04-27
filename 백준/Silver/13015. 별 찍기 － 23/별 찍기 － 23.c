#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<2*n-1;i++){
		if(i==0||i==2*n-2){
			for(int j=0;j<n;j++) printf("*");
			for(int j=0;j<2*n-3;j++) printf(" ");
			for(int j=0;j<n;j++) printf("*");
		}
		else if(i!=n-1&&i<n){
			for(int j=0;j<i;j++) printf(" ");
			printf("*");
			for(int j=0;j<n-2;j++)printf(" ");
			printf("*");
			for(int j=0;j<(n-i)*2-3;j++) printf(" ");
			printf("*");
			for(int j=0;j<n-2;j++)printf(" ");
			printf("*");
		}
		else if(i==n-1){
			for(int j=0;j<n-1;j++) printf(" ");
			printf("*");
			for(int j=0;j<n-2;j++)printf(" ");
			printf("*");
			for(int j=0;j<n-2;j++)printf(" ");
			printf("*");
		}
		else{
			for(int j=2;j<n-(i%n);j++) printf(" ");
			printf("*");
			for(int j=0;j<n-2;j++)printf(" ");
			printf("*");
			for(int j=0;j<(i-n)*2+1;j++) printf(" ");
			printf("*");
			for(int j=0;j<n-2;j++)printf(" ");
			printf("*");
		}
		printf("\n");
	}
}