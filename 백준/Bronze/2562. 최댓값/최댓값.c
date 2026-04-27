#include <stdio.h>

int main() {
	int a[9],max=0,b;
	for(int i=0;i<9;i++) scanf("%d",&a[i]);
	for(int i=0;i<9;i++){
		if(a[i]>max){
			max=a[i];
			b=i;
		}
	}
	printf("%d\n%d",max,b+1);
}