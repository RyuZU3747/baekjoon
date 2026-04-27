#include <stdio.h>
#include <stdlib.h>
int main(){
	char s[101];
	gets(s);
	for(int i=0;i<101;i++){
		if(s[i]>='a'&&s[i]<='m'){
			s[i]+=13;
		}
		else if(s[i]>='n'&&s[i]<='z'){
			s[i]-=13;
		}
		else if(s[i]>='A'&&s[i]<='M'){
			s[i]+=13;
		}
		else if(s[i]>='N'&&s[i]<='Z'){
			s[i]-=13;
		}
	}
	printf("%s",s);
}