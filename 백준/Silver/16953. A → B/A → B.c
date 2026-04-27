#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int

ll a,b,ans;

void solve(ll cnt, ll val){
	if(val==b) ans=cnt;
	else if(val>b) return;
	solve(cnt+1,val*2);
	solve(cnt+1,val*10+1);
}

int main(){
	scanf("%lld %lld",&a,&b);
	solve(0,a);
	if(ans==0)printf("-1");
	else printf("%lld",ans+1);
}