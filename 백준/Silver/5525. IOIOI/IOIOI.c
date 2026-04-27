#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
int fail[1000001];
void failfunc(char* p){
	int m = strlen(p), j=0;
	for(int i=1;i<m;i++){
		while(j>0&&p[i]!=p[j]){
			j=fail[j-1];
		}
		if(p[i]==p[j]){
			fail[i]=++j;
		}
	}
}

int main(){
	int n,m,cnt=0;
	char s[1000001],p[1000001];
	scanf("%d %d",&n,&m);
	scanf(" %s",s);
	for(int i=0;i<2*n+1;i++){
		if(i%2==0) p[i]='I';
		else p[i]='O';
	}
	failfunc(p);
	for(int i=0,j=0;i<m;i++){
		while(j>0&&s[i]!=p[j]){
			j = fail[j-1];
		}
		if(s[i]==p[j]){
			if(j==2*n){
				cnt++;
				j=fail[j];
			}
			else j++;		
		}
	}
	printf("%d",cnt);
}