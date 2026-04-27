#include <stdio.h>

int main(){
	int n=0;
	char sort[11];
	scanf("%s",sort);
	for(int i=0;sort[i]!='\0';i++)	n++;
	for(int i=0;i<n-1;i++){
		for(int j=i;j<n;j++){
			if(sort[i]<sort[j]){
				char tmp;
				tmp=sort[i];
				sort[i]=sort[j];
				sort[j]=tmp;
			}
		}
	}
	printf("%s",sort);
}