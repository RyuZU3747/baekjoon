#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int queue[10000];
	int front=0,rear=0,n,a;
	char command[6]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s",command);
		if(strcmp(command,"push")==0){
			scanf("%d",&a);
			rear++;
			queue[rear]=a;
		}
		else if(strcmp(command,"pop")==0){
			if(front==rear) printf("-1\n");
			else{
				front++;
				printf("%d\n",queue[front]);
			}
		}
		else if(strcmp(command,"size")==0){
			printf("%d\n",rear-front);
		}
		else if(strcmp(command,"empty")==0){
			if(rear==front) printf("1\n");
			else printf("0\n");
		}
		else if(strcmp(command,"front")==0){
			if(rear==front) printf("-1\n");
			else printf("%d\n",queue[front+1]);
		}
		else if(strcmp(command,"back")==0){
			if(rear==front) printf("-1\n");
			else printf("%d\n",queue[rear]);
		}
	}
}