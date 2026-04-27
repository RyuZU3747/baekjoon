#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,rear=-1,front=0;
	int* arr;
	scanf("%d",&n);
	if(n==1) {
		printf("1");
		return 0;
	}
	arr = (int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++) arr[i]=i+1;
	while(front!=rear){
		front++;
		if(front>=n) front=front%n;
		rear++;
		arr[rear]=arr[front];
		front++;
	}
	printf("%d",arr[front]);
	free(arr);
}