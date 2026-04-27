#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,m,c,i=0,j=0;
	scanf("%d %d %d",&n,&m,&c);
	for(long long int k=0;k<=n*m-1;k++){
		if(k==c){
			printf("%d %d",j, i);
			break;
		}
		if(i==m-1){
			j++;
			i=0;
		}
		else i++;
	}
}
