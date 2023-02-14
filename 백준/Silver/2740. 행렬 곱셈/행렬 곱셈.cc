#include <stdio.h>
int main() {
	int n,m,k;
	int ma[101][101],mb[101][101],mx[101][101];
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++) scanf("%d",&ma[i][j]);
	}
	scanf("%d %d",&m,&k);
	for(int i=0;i<m;i++){
		for(int j=0;j<k;j++) scanf("%d",&mb[i][j]);
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++) mx[i][j]=0;
	}
	for(int i=0;i<n;i++){
			for(int l=0;l<m;l++){
		for(int j=0;j<k;j++){
				mx[i][j]+=ma[i][l]*mb[l][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<k;j++) printf("%d ",mx[i][j]);
		printf("\n");
	}
}
