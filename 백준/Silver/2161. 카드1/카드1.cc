#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,p=0;
	int* arr;
	scanf("%d",&n);
	arr = (int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++) arr[i]=i+1;
	for(int i=0;i<n-1;i++){
		if(arr[p]!=0){
			printf("%d ",arr[p]);
			arr[p]=0;
			p++;
		}
		int t;
		t=arr[p];
		for(int k=0;k<n;k++){
			arr[k]=arr[k+1];
		}
		arr[n-1]=t;
	}
	printf("%d",arr[p]);
	free(arr);
}