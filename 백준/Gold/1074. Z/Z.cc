#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#1074
long long int cnt=0;
int n,r,c;
int rtmp,ctmp;

void quadtree(int x, int y, int n){
	int half = n/2;
	if(n==1){
		if(x==r&&y==c) printf("%lld",cnt);
		return;
	}
	if(rtmp<half&&ctmp<half){
		quadtree(x,y,half);
	}
	else if(rtmp<half&&ctmp>=half){
		cnt+=half*half;
		ctmp-=half;
		quadtree(x,y+half,half);
	}
	else if(rtmp>=half&&ctmp<half){
		cnt+=half*half*2;
		rtmp-=half;
		quadtree(x+half,y,half);
	}
	else{
		cnt+=half*half*3;
		rtmp-=half;
		ctmp-=half;
		quadtree(x+half,y+half,half);
	}
	return;
}

int main(){
	scanf("%d %d %d",&n,&r,&c);
	n = (int)pow(2,n);
	rtmp=r,ctmp=c;
	quadtree(0, 0, n);
	return 0;
}