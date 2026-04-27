#include <stdio.h>
#include <stdlib.h>

int sort(const void *a, const void *b){
	int n1=*(int*)a;
	int n2=*(int*)b;
	if(n1>n2) return 1;
	else if(n1<n2) return -1;
	else return 0;
}

int search(int l, int r, int n, const int *ar){
	int mid=(l+r)/2;
	if(l>r) return 0;
	else{
		if(ar[mid]>n){
			search(l,mid-1,n,ar);
		}
		else if(ar[mid]<n){
			search(mid+1,r,n,ar);
		}
		else return 1;
	}
}

int main(void) {
	int *a,*res;
	int n1,n2,b;
	
	scanf("%d",&n1);
	a=(int*)calloc(n1,sizeof(int));
	for(int i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}
	qsort(a,n1,sizeof(int),sort);
	scanf("%d",&n2);
	res=(int*)calloc(n2,sizeof(int));
	for(int i=0;i<n2;i++){
		scanf("%d",&b);
		res[i]=search(0,n1-1,b,a);
	}
	for(int i=0;i<n2;i++){
		printf("%d ",res[i]);
	}
	free(a);
	free(res);
}