#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
int arr[65][65];
void quadtree(int x, int y, int n){
	int half = n/2, allsame=1;
	int first = arr[x][y];
	if(n==1){
		printf("%d",first);
		return;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(first!=arr[x+i][y+j]){
				allsame=0;
				break;
			}
		}
	}
	if(allsame==0){
		printf("(");
		quadtree(x,y,half);
		quadtree(x,y+half,half);
		quadtree(x+half,y,half);
		quadtree(x+half,y+half,half);
		printf(")");
	}
	else printf("%d",first);
}

int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%1d",&arr[i][j]);
		}
	}
	quadtree(0, 0, n);
}