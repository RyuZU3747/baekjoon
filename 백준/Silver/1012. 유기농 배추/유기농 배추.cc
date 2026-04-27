#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

int mat[1001][1001];

int n,m,k,cnt;

bool visited[1001][1001];

void dfs(int y,int x){
	if(visited[y][x]||!mat[y][x]) return;
	visited[y][x]=true;
	if(y+1<m&&mat[y+1][x]==1){
		dfs(y+1,x);
	}
	if(x-1>=0&&mat[y][x-1]==1){
		dfs(y,x-1);
	}
	if(x+1<n&&mat[y][x+1]==1){
		dfs(y,x+1);
	}
	if(y-1>=0&&mat[y-1][x]==1){
		dfs(y-1,x);
	}
}

int main(){
	int t;
	scanf("%d",&t);
	for(int p=0;p<t;p++){
		for(int i=0;i<1001;i++){
			for(int j=0;j<1001;j++){
				mat[i][j]=0;
				visited[i][j]=false;
			}
		}
		cnt=0;
		scanf("%d %d %d",&m,&n,&k);
		for(int i=0;i<k;i++){
			int a,b;
			scanf("%d %d",&a,&b);
			mat[a][b]=1;
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(visited[i][j]==false&&mat[i][j]==1){
					cnt++;
					dfs(i,j);
				}
			}
		}
		printf("%d\n",cnt);
	}
}