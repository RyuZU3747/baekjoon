#include <stdio.h>

int main(){
	int n,k,p=0,rear;
	scanf("%d %d",&n,&k);
	rear=n;
	int ar[n+1];
	for(int i=0;i<n;i++) ar[i]=i+1;
	printf("<");
	for(int i=0;i<n-1;i++){
		printf("%d, ",ar[(p+k-1)%rear]);
		ar[n]=ar[p];
		p=(p+k-1)%rear;
		for(int i=p;i<rear;i++)	ar[i]=ar[i+1];
		rear--;
	}
	printf("%d",ar[0]);
	printf(">");
}
