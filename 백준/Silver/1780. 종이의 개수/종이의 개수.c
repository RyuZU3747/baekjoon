#include <stdio.h>
int minus=0;
int zero=0;
int plus=0;
void divide(int board[][2187],int x, int y, int size){
	int ok = 1;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(board[x+i][y+j]!=board[x][y]) ok = 0;	
		}
	}
	if(ok==0){
		divide(board,x,y,size/3);
		divide(board,x+size/3,y,size/3);
		divide(board,x+size/3+size/3,y,size/3);
		
		divide(board,x,y+size/3,size/3);
		divide(board,x+size/3,y+size/3,size/3);
		divide(board,x+size/3+size/3,y+size/3,size/3);
		
		divide(board,x,y+size/3+size/3,size/3);
		divide(board,x+size/3,y+size/3+size/3,size/3);
		divide(board,x+size/3+size/3,y+size/3+size/3,size/3);
	}
	else{
		if(board[x][y]==1) plus++;
		else if(board[x][y]==0) zero++;
		else minus++;
		return;
	}
}
int main(){
	int n;
	int board[2187][2187];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&board[i][j]);
		}
	}
	divide(board,0,0,n);
	printf("%d\n%d\n%d",minus,zero,plus);
}