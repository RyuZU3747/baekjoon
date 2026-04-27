#include <stdio.h>
#include <stdlib.h>
int main(){
	char s[101];
	while((s[0]=getchar()) != EOF){
		printf("%s",s);
	}
}