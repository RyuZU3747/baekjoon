#include <stdio.h>
int memo[1000001];
int fibo(int n){
	if(n==0) return 0;
	else if(n==1) return 1;
	if(memo[n]>0) return memo[n];
	else{
		return memo[n] = (fibo(n-2)+fibo(n-1)) % 1000000007;
	}
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",fibo(n));	
}