#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define MOD 1000000000007;
int main(){
	int sum=0, tmp;
	while(scanf("%d",&tmp)!=EOF){
	sum+=tmp;
	}
	printf("%d",sum);
}