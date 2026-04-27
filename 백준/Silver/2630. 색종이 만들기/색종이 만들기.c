#include <stdio.h>
int blue=0;
int white=0;
void divide(int board[][128],int x, int y, int size){
	int ok = 1;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(board[x+i][y+j]!=board[x][y]) ok = 0;	
		}
	}
	if(ok==0){
		divide(board,x,y,size/2);
		divide(board,x+size/2,y,size/2);
		divide(board,x,y+size/2,size/2);
		divide(board,x+size/2,y+size/2,size/2);
	}
	else{
		if(board[x][y]==1) blue++;
		else white++;
		return;
	}
}
int main(){
	int n;
	int board[128][128];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&board[i][j]);
		}
	}
	divide(board,0,0,n);
	printf("%d\n%d",white,blue);
}