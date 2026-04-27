#include <stdio.h>

int main(){
	char s[101]={'\0'};
	int a[26];
	for(int i=0;i<26;i++) a[i]=-1;
	scanf("%s",&s);
	for(int j='a';j<='z';j++){
		for(int i=0;i<101;i++){
			if(s[i]==j){
				a[j-97]=i;
				break;
			}
		}
	}
	for(int i=0;i<26;i++){
		printf("%d ",a[i]);
	}
}