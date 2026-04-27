#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int n,top=-1,x,sum=0;
	int* stack;
	scanf("%d",&n);
	stack = (int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++){
			scanf("%d",&x);
		if(x==0){
			stack[top--]=0;
		}
		else{
			stack[++top]=x;
		}
	}
	for(int i=0;i<=top;i++){
		sum+=stack[i];
	}
	printf("%d",sum);
	free(stack);
}