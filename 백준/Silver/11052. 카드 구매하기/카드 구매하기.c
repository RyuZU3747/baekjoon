#include <stdio.h>
int main(){
	int n,max;
	scanf("%d",&n);
	int card[1000001],p[10001];
	for(int i=1;i<=n;i++){
		scanf("%d",&p[i]);
	}
	card[1]=p[1];
	for(int i=2;i<=n;i++){
		max=-1;
		for(int j=0;j<i;j++){
			if(max<card[i]) max=card[i];
			if(max<card[j]+p[i-j]) max=card[j]+p[i-j];
		}
		card[i]=max;
	}
	printf("%d",card[n]);
}