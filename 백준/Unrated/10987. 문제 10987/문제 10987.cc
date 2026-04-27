#include <stdio.h>

int main() {
	char a[1000];
	int c=0;
	for(int j=0;a[j]!=0;j++){
		a[j]==0;
	}
	c=0;
	scanf(" %s",&a);
	for(int j=0;a[j]!=0;j++){
		if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u') c++;
	}
	printf("%d\n",c);
	
}
