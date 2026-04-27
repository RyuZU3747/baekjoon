#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define MOD 1000000000007;
int main(){
	char s[501];
	int len;
	while(1){
		gets(s);
		if(s[0]=='E'&&s[1]=='N'&&s[2]=='D') return 0;
		len = strlen(s);
		for(int i=0;i<len;i++){
			printf("%c",s[len-i-1]);
		}
		printf("\n");
	}
}