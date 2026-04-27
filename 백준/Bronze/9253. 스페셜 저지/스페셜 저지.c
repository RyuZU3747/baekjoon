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
	int n1,n2,m,cnt1=0,cnt2=0,ansarr[1000001];
	char s1[1000001],s2[1000001],p[1000001];
	gets(s1);
	gets(s2);
	gets(p);
	m=strlen(p);
	n1=strlen(s1);
	n2=strlen(s2);
	failfunc(p);
	for(int i=0,j=0;i<n1;i++){
		while(j>0&&s1[i]!=p[j]){
			j = fail[j-1];
		}
		if(s1[i]==p[j]){
			if(j==m-1){
				cnt1++;
				j=fail[j];
			}
			else j++;		
		}
	}
	for(int i=0,j=0;i<n2;i++){
		while(j>0&&s2[i]!=p[j]){
			j = fail[j-1];
		}
		if(s2[i]==p[j]){
			if(j==m-1){
				cnt2++;
				j=fail[j];
			}
			else j++;		
		}
	}
	if(cnt1>0&&cnt2>0) printf("YES");
	else printf("NO");
}