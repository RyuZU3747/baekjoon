#include <stdio.h>

int main() {
	char a[1000];
	int n,v=0,c=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;a[j]!=0;j++){
			a[j]==0;
		}
		v=0;
		c=0;
		scanf(" %[^\n]s",&a);
		for(int j=0;a[j]!=0;j++){
			if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u'||a[j]=='A'||a[j]=='E'||a[j]=='I'||a[j]=='O'||a[j]=='U') v++;
			else if(a[j]!=' ')c++;
		}
		printf("%d %d\n",c,v);
	}
}
