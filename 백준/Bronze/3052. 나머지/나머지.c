#include <stdio.h>

int main(){
	int c,rc=0,a[10],n[10];
	for(int i=0;i<10;i++) {
		scanf("%d",&a[i]);
		n[i]=a[i]%42;
	}
	for(int i=0;i<10;i++){
		c=0;
		for(int j=0;j<i;j++){
			if(n[i]!=n[j])c+=1;
		}
		if(c==i) rc+=1;
	}
	printf("%d",rc);
}