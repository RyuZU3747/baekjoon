#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
int fail[50001], max;

void failfunc(char* p){
	int m = strlen(p), j=0;
	for(int i=1;i<m;i++){
		while(j>0&&p[i]!=p[j]) j=fail[j-1];
		if(p[i]==p[j]){
			fail[i]=++j;
		}
	}
}

int main(){
	int n,m;
	char p[50001];
	scanf("%s",p);
	m=strlen(p);
	for(int i=0;i<m;i++){
		failfunc(&p[i]);
		for(int j=0;j<m;j++) max = Max(max,fail[j]);
		for(int j=0;j<m;j++) fail[j]=0;
	}
	printf("%d",max);		
}