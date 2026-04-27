#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int main(){
	char s[1000001], p[1000001];
	gets(s);
	gets(p);
	if(strstr(s,p)){
		printf("1");
		return 0;
	}
	printf("0");
}