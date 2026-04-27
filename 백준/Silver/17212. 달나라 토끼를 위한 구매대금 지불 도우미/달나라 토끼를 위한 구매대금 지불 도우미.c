#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
int main(){
	int n,su[1000001],mini;
	scanf("%d",&n);
	su[1]=1;
	su[2]=1;
	su[3]=2;
	su[4]=2;
	su[5]=1;
	su[6]=2;
	su[7]=1;
	for(int i=8;i<=n;i++){
		mini = Min(su[i-1],su[i-2]);
		mini = Min(mini,su[i-5]);
		mini = Min(mini,su[i-7]);
		su[i]=/*-1, -2, -5, -7중에 가장 작은거*/mini+1;
	}
	printf("%d",su[n]);
}