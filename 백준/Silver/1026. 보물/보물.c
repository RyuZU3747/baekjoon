#include <stdio.h>
#include <stdlib.h>
int comp1(const void* a, const void* b){
	if(*(int*)a>*(int*)b) return 1;
	else if(*(int*)a<*(int*)b) return -1;
	else return 0;
}
int comp2(const void* a, const void* b){
	if(*(int*)a>*(int*)b) return -1;
	else if(*(int*)a<*(int*)b) return 1;
	else return 0;
}
int main(){
	int n, sum = 0;
	int a[51], b[51];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		scanf("%d",&b[i]);
	}
	qsort(a,n,sizeof(int),comp1);
	qsort(b,n,sizeof(int),comp2);
	for(int i=0;i<n;i++){
		sum += a[i]*b[i];
	}
	printf("%d",sum);
}