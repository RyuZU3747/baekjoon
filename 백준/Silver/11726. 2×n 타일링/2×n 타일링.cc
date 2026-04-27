#include <stdio.h>
int memo[1001];
int tile(int n){
	if(n<=1) return 1;
	if(memo[n]>0) return memo[n];
	else{
		return memo[n] = (tile(n-2)+tile(n-1)) % 10007;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",tile(n));	
}