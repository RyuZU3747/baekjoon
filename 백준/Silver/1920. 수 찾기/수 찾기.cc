#include <stdio.h>
#include <stdlib.h>
int com(const void *a, const void *b){
	int n1 = *(long long *)a;
	int n2 = *(long long *)b;
	if(n1>n2) return 1;
	else if(n1==n2) return 0;
	else return -1;
}
int search(int *arr,int left, int right, int su){
	int mid;
	mid=(left+right)/2;
	if(left>=right){
		printf("0\n");
		return 0;
	}
	if(arr[mid]==su||arr[left]==su||arr[right]==su){
		printf("1\n");
		return 0;
	}
	else if(arr[mid]>su){
		search(arr,left,mid-1,su);
	}
	else if(arr[mid]<su){
		search(arr,mid+1,right,su);
	}
	return 0;
}
int main(){
	int arr[100001];	
	int n,k,a;
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	qsort(arr,n,sizeof(int),com);
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",&a);
		search(arr,0,n-1,a);
	}
}