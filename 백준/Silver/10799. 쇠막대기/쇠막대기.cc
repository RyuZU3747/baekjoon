#include <stdio.h>
#include <stdlib.h>
int main(){
	int pipe=0, gaesu=0;
	char* str;
	str=(char*)malloc(sizeof(char)*100000);
	scanf("%s",str);
	if(str[0]=='(') pipe++;
	for(int i=1;str[i]!='\0';i++){
		if(str[i]=='(')	pipe++;
		else if(str[i]==')'){
			pipe--;
			if(str[i-1]=='(') gaesu+=pipe;
			else if(str[i-1]==')') gaesu++;
		}
	}
	printf("%d",gaesu);
	free(str);
}