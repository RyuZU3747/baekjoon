#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
int fail[1000001];
int failfunc(char* p){
	int len = strlen(p),j=0;
	for(int i=1;i<len;i++){
		while(j>0&&p[i]!=p[j]) j=fail[j-1];
		if(p[i]==p[j]){
			fail[i]=++j;
		}
	}
}

int main(){
	char p[1000001];
	long long int n;
	scanf(" %s",p);
	scanf("%lld",&n);
	failfunc(p);
	long long int len = strlen(p);
	
	printf("%lld\n",(len*n)-(fail[len-1])*(n-1));
}