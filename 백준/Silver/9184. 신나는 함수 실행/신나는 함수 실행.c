#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
int w[101][101][101];
int dp(int a, int b, int c){
	if(w[a+50][b+50][c+50]>0) return w[a+50][b+50][c+50];
	if(a<=0||b<=0||c<=0){
		w[a+50][b+50][c+50]=1;
		return 1;
	}
	if(a>20||b>20||c>20) return w[a+50][b+50][c+50]=dp(20,20,20);
	if(a<b&&b<c) return w[a+50][b+50][c+50]=dp(a,b,c-1)+dp(a,b-1,c-1)-dp(a,b-1,c);
	return w[a+50][b+50][c+50]=dp(a-1,b,c)+dp(a-1,b-1,c)+dp(a-1,b,c-1)-dp(a-1,b-1,c-1);
}
int main(){
	int a,b,c;
	while(1){
		scanf("%d %d %d",&a,&b,&c);
		if(a==-1&&b==-1&&c==-1) return 0;
		printf("w(%d, %d, %d) = %d\n",a,b,c,dp(a,b,c));
	}
}