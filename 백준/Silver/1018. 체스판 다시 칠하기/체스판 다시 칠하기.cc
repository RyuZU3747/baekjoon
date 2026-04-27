#include <stdio.h>

int main(){
	int n,m,startB,startW,min=9999;
	char board[50][50];
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf(" %c",&board[i][j]);
		}
	}
	for(int i=0;i<n-7;i++){
		for(int j=0;j<m-7;j++){
			startB=0;
			startW=0;
			for(int k=0;k<8;k++){
				for(int l=0;l<8;l++){
					//0흰
					if((k+l)%2==0){
						if(board[i+k][j+l]=='B')	startW++;
					}
					else{
						if(board[i+k][j+l]=='W')	startW++;
					}
				}
			}
			if(min>startW) min=startW;
			for(int k=0;k<8;k++){
				for(int l=0;l<8;l++){
					//0검
					if((k+l)%2==0){
						if(board[i+k][j+l]=='W')	startB++;
					}
					else{
						if(board[i+k][j+l]=='B')	startB++;
					}
				}
			}
			if(min>startB) min=startB;
		}
	}
	printf("%d",min);
}