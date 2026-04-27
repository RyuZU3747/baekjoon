#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define MOD 1000000000007;
int fail[1000001];

void failfunc(char *s){
	int len = strlen(s),j=0;
	for(int i=1;i<len;i++){
		while(j>0&&s[i]!=s[j]) j=fail[j-1];
		if(s[i]==s[j]){
			fail[i]=++j;
		}
	}
}

int main(){
	int l,max=0;
	char s[1000001];
	scanf("%d",&l);
	scanf(" %s",s);
	failfunc(s);
	printf("%d",l-fail[strlen(s)-1]);
}