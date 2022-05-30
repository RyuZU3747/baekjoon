#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int

int mato[101][101][101], visited[101][101][101];//가로세로높이
int day,front,rear,ans;
int a,b,c;

struct q{
	int m;
	int n;
	int h;
	int dayday;
}queue[1000001];

int dm[6] = {0,0,1,-1,0,0};
int dn[6] = {1,-1,0,0,0,0};
int dh[6] = {0,0,0,0,1,-1};

void bfs(){
	while(front!=rear){
		int m=queue[front].m;
		int n=queue[front].n;
		int h=queue[front].h;
		day = queue[front].dayday;
		ans = Max(ans,day);
		front++;
		for(int i=0;i<6;i++){
			int nextm = m+dm[i];
			int nextn = n+dn[i];
			int nexth = h+dh[i];
			if(nextm>=0&&nextm<a&&nextn>=0&&nextn<b&&nexth>=0&&nexth<c){
				if(visited[nextm][nextn][nexth]==1) continue;
				if(mato[nextm][nextn][nexth]==0){
					queue[rear].m=nextm;
					queue[rear].n=nextn;
					queue[rear].h=nexth;
					queue[rear].dayday=day+1;
					rear++;
					
					mato[nextm][nextn][nexth]=1;
					visited[nextm][nextn][nexth]=1;
				}
			}
		}
	}
}


int main(){
	scanf("%d %d %d",&a,&b,&c);
	for(int i=0;i<c;i++){
		for(int j=0;j<b;j++){
			for(int k=0;k<a;k++){
				scanf("%d",&mato[k][j][i]);
				if(mato[k][j][i]==1){
					queue[rear].m=k;
					queue[rear].n=j;
					queue[rear].h=i;
					rear++;
				}
			}
		}
	}
	if(rear==0){
		printf("-1");
		return 0;
	}
	bfs();
	for(int i=0;i<c;i++){
		for(int j=0;j<b;j++){
			for(int k=0;k<a;k++){
				if(mato[k][j][i]==0){
					printf("-1");
					return 0;
				}
			}
		}
	}
	printf("%d",ans);
}