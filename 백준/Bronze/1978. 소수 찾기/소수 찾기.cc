#include <stdio.h>

int main(){
	int n,s[100],c=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&s[i]);
	for(int i=0;i<n;i++){
		if(s[i]==2) c+=1;
		for(int j=2;j<s[i];j++){
			if(s[i]%j==0)	break;
			if(j==s[i]-1&&s[i]%j!=0){
				c+=1;
			}
		}
	}
	printf("%d",c);
}