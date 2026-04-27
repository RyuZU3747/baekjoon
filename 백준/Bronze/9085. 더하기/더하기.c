#include <stdio.h>

int main(){
	int t, n, a, sum;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		scanf("%d",&n);
		sum=0;
		for(int j=0;j<n;j++){
			scanf("%d",&a);
			sum+=a;
		}
		printf("%d\n",sum);
	}
}