#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	for(int i=2;i<=n;i++){
		int sosu=1;
		for(int j=2;j*j<=i;j++){
			if(i%j==0){
				sosu=0;
				break;
			}
		}
		if(sosu==1&&i>=m) printf("%d\n",i);
	}
}