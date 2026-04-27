#include <stdio.h>
int main(){
	char board[9][9];
	int mal = 0;
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			scanf("%c ",&board[i][j]);
		}
	}
	for(int i=0;i<8;i++){
		for(int j=0;j<8;j++){
			if(i%2==0){
				if(j%2==0){
					if(board[i][j]=='F'){
						mal++;
					}
				}
			}
			else{
				if(j%2!=0){
					if(board[i][j]=='F'){
						mal++;
					}
				}
			}
		}
	}
	printf("%d",mal);
}