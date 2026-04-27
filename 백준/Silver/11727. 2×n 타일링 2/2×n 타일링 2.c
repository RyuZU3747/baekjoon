#include <stdio.h>
/*int memo[1001];
int tile(int n){
	if(n<=1) return 1;
	int ret = memo[n];
	if(ret!=-1) return ret;
	else{
		return ret = (tile(n-2)+tile(n-1)*2) % 10007;
	}
}*/
int main(){
	int n, tile[1001];
	scanf("%d",&n);
	tile[0]=1;
	tile[1]=1;
	for(int i=2;i<=n;i++){
		tile[i]=(tile[i-1]+tile[i-2]*2)%10007;
	}
	printf("%d",tile[n]);	
}