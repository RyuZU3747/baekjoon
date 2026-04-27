#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
int n, stair[10001],score[10001];

int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&stair[i]);
	}
	score[1]=stair[1];
	score[2]=stair[1]+stair[2];
	for(int i=3;i<=n;i++){
		score[i]=Max(score[i-3]+stair[i-1]+stair[i],Max(score[i-2]+stair[i],score[i-1]));
	}
	printf("%d",score[n]);
}