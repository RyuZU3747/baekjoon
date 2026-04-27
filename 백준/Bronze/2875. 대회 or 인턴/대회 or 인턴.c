#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

int main(){
	int n,m,k,team=0;
	scanf("%d %d %d",&n,&m,&k);
	while(1){
		if(n>=2&&m>=1){
			n-=2;
			m-=1;
			team++;
		}
		else{
			if(n<2){
				k-=n;
				k-=m;
			}
			else{
				k-=m;
				k-=n;
			}
			while(1){	
				if(k<=0){
					printf("%d",team);
					return 0;
				}
				else{
					k-=3;
					team--;
				}
			}
		}
	}
}