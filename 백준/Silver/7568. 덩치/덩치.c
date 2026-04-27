#include <stdio.h>

int main(){
	int n,rate;
	int x[200],y[200];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d",&x[i],&y[i]);
	}
	for(int i=0;i<n;i++){
		rate=1;
		for(int j=0;j<n;j++){
			if(i==j) continue;
			else if(x[i]<x[j]&&y[i]<y[j]){
				rate++;
			}
		}
		printf("%d ",rate);
	}
}