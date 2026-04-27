#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

typedef struct dot{
	int index;
	int value;
	int aftval;
}dot;

int valcmp(const void *a, const void *b){
	dot *x = (dot *)a;
	dot *y = (dot *)b;
	return x->value-y->value;
}

int indexcmp(const void *a, const void *b){
	dot *x = (dot *)a;
	dot *y = (dot *)b;
	return x->index-y->index;
}

int main(){
	int n,ans=0;
	scanf("%d",&n);
	dot t[1000001];
	for(int i=0;i<n;i++){
		scanf("%d",&t[i].value);
		t[i].index=i;
	}
	qsort(t,n,sizeof(dot),valcmp);
	t[0].aftval=0;
	for(int i=1;i<n;i++){
		if(t[i].value==t[i-1].value) t[i].aftval=t[i-1].aftval;
		else t[i].aftval=t[i-1].aftval+1;
	}
	qsort(t,n,sizeof(dot),indexcmp);
	for(int i=0;i<n;i++){
		printf("%d ",t[i].aftval);
	}
}