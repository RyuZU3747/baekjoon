#include <stdio.h>

int main(){
	int a[8],c=0;
	for(int i=0;i<8;i++) scanf("%d",&a[i]);
	for(int i=1;i<8;i++){
		if(a[i]==a[i-1]+1) c+=1;
		else if(a[i]==a[i-1]-1) c-=1;
	}
	if(c==7) printf("ascending");
	else if(c==-7) printf("descending");
	else printf("mixed");
}