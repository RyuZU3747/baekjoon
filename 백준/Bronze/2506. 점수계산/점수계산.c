#include <stdio.h>

int main(){
	int n,s=0,c=0,a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	for (int i=0;i<n;i++){
		if(a[i]==1){
			c+=1;
			s+=c;
		}
		else if(a[i]==0) c=0;
		else break;
	}
		printf("%d",s);
}