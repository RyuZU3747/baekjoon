#include <stdio.h>

int main(){
	int n,m[500000],s=1;
	scanf("%d",&n);
	for(int i=0;i<n;i++)scanf("%d",&m[i]);
	for(int i=0;i<n;i++){
		s+=m[i]-1;
	}
	printf("%d",s);
}