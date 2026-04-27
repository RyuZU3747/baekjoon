#include <stdio.h>

int main(){
	char str[1000000]={0,};
	int check[26]={0,};
	scanf("%s",str);
	for(int i=0;str[i]!=0;i++){
		if(str[i]>='a') str[i]-=32;
		check[str[i]-'A']++;
	}
	char m=0;
	int max=-1;
	for(int i=0;i<26;i++){
		if(max<check[i]) {
		m=i;
		max=check[i];
	}
	}
	for(int i=0;i<26;i++){
		if(i!=m&&max==check[i]){
			printf("?");
			return 0;
		}
	}
	printf("%c",m+65);
}
	