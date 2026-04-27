#include <stdio.h>

int main(){
	int n,k,su=0;
	int arr[10001]={0};
	scanf("%d %d",&n,&k);
	for(int i=1;i<=n;i++){
		if(n%i==0) {
			arr[su]=i;
			su++;
		}
	}
	printf("%d",arr[k-1]);
}