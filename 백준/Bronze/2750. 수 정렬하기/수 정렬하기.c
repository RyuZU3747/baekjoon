#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n,temp;
    int* a;
    scanf("%d",&n);
    a = (int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++){
    	scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(a[i]<=a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}