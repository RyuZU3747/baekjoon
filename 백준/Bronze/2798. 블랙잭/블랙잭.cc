#include <stdio.h>
int main(){
	int n, m;
	long long int max = 0;
	int ar[101];
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	int i=0,j,k;
	for(i;i<n-2;i++){
		j=i+1;
		for(j;j<n-1;j++){
			k=j+1;
			for(k;k<n;k++){
				if(ar[i]+ar[j]+ar[k]>m) continue;
				else if(max<=ar[i]+ar[j]+ar[k]) max = ar[i]+ar[j]+ar[k];
			}
		}
	}
	printf("%lld",max);
}