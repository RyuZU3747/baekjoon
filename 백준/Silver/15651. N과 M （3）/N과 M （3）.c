#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int n,m,visit[9],ans[9],depth=0;
int recur(){
	if(depth==m){
		for(int i=0;i<m;i++) printf("%d ",ans[i]);
		printf("\n");
		return 0;
	}
	for(int i=1;i<=n;i++){
		//if(visit[i]==0){
			ans[depth]=i;
			visit[i]=1;
			depth++;
			recur();
			visit[i]=0;
			depth--;
		//}
	}
}
int main(){
	scanf("%d %d",&n,&m);
	recur();
}