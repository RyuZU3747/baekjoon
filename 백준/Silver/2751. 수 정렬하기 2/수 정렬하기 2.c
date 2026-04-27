#include <stdio.h>
#include <stdlib.h>
int compare(const void *a,const void *b){
	int n1 = *(int*)a;
	int n2 = *(int*)b;
	if(n1<n2) return -1;
	else if(n1==n2) return 0;
	else return 1;
}
int main(void) {
    int n,temp;
    int* a;
    scanf("%d",&n);
    a = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	qsort(a,n,sizeof(int),compare);
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}