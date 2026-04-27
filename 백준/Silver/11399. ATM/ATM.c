#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int comp(const void *a, const void *b){
	int n1 = *(int*)a;
	int n2 = *(int*)b;
	return n1-n2;
}

int main(){
	int n,p[1001],tmp,sum=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&p[i]);
	}
	qsort(&p,n,sizeof(int),comp);
	tmp=sum=p[0];
	for(int i=1;i<n;i++){
		tmp+=p[i];
		sum+=tmp;
	}
	printf("%d",sum);
}