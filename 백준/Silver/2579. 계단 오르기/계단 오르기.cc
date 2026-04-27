#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
int n, stair[301],score[301];

int main(){
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&stair[i]);
	}
	score[1]=stair[1];
	score[2]=Max(stair[1]+stair[2],stair[1]);
	score[3]=Max(stair[2]+stair[3],stair[1]+stair[3]);
	for(int i=4;i<=n;i++){
		score[i]=Max(stair[i]+score[i-2]/*두칸*/,stair[i]+stair[i-1]+score[i-3]/*직전에 두칸한칸*/);
	}
	printf("%d",score[n]);
}