#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int arr[9][9];
int checkx[10][10],checky[10][10], checkbox[10][10];


int end(){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(arr[i][j]==0) return 0;
		}
	}
	return 1;
}

void backtrac(int cnt){
	int flag = 0;
	if(end()) flag=1;
	if(flag){	
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				printf("%d ",arr[i][j]);
			}
			printf("\n");
		}
		exit(0);
	}
	int x=cnt%9;
	int y=cnt/9;
			if(arr[y][x]==0){
				for(int k=1;k<=9;k++){
					if(checky[y][k]==1||checkx[x][k]==1||checkbox[(x/3)*3+(y/3)][k]==1) continue;
					arr[y][x] = k;
					checky[y][k]=1;
					checkx[x][k]=1;
					checkbox[(x/3)*3+(y/3)][k]=1;
					backtrac(cnt+1);
					checky[y][k]=0;
					checkx[x][k]=0;
					checkbox[(x/3)*3+(y/3)][k]=0;
					arr[y][x] = 0;
				}
			}
	else backtrac(cnt+1);
}

int main(){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			scanf("%1d",&arr[i][j]);
			checky[i][arr[i][j]]=1;
			checkx[j][arr[i][j]]=1;
			checkbox[(j/3)*3+(i/3)][arr[i][j]]=1;
		}
	}
	backtrac(0);
}