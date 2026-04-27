#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
	char a[100]={0};
	int c=0;
	scanf("%s",&a);
	for(int i=0;a[i]!=0;i++){
		c++;
	}
	printf("%d",c);
}