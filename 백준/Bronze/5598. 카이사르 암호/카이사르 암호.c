#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int main(){
	char p[1000001];
	scanf(" %s",p);
	int len = strlen(p);
	for(int i=0;i<len;i++){
		p[i]-=3;
		if(p[i]<65) p[i]=91-(65-p[i]);
	}
	printf("%s",p);
}