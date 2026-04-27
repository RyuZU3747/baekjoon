#include <stdio.h>

int main(){
	char ch[100]={0};
	scanf("%s",&ch);
	for(int i=0;ch[i]!=0;i++){
		printf("%c",ch[i]);
		if((i+1)%10==0)	printf("\n");
	}
}