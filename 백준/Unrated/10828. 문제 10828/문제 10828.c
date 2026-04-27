#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	int n,top=-1,x;
	int* stack;
	char order[10]={0};
	scanf("%d",&n);
	stack = (int*)malloc(sizeof(int)*n);
	for(int i=0;i<n;i++){
		scanf("%s",order);
		if(strcmp(order,"push")==0){
			scanf("%d",&x);
			stack[++top]=x;
		}
		else if(strcmp(order,"top")==0){
			if(top==-1) printf("-1\n");
			else printf("%d\n",stack[top]);
		}
		else if(strcmp(order,"size")==0){
			printf("%d\n",top+1);
		}
		else if(strcmp(order,"empty")==0){
			if(top==-1) printf("1\n");
			else printf("0\n");
		}
		else if(strcmp(order,"pop")==0){
			if(top==-1) printf("-1\n");
			else printf("%d\n",stack[top--]);
		}
	}
	free(stack);
}