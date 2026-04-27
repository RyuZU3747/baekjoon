#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}


int main(){
	long long int n,d;
	int checkarr[10];
	scanf("%lld %lld",&n,&d);
	for(long long int i=n+1;i<=1000000000;i++){
		for(int j=0;j<d;j++) checkarr[j]=0;
		long long int max=1;
		long long int min=1;
		long long int tmp = i;
		int check=1;
		for(int j=1;j<d;j++){
			long long int maxtmp=1;
			for(int k=0;k<j;k++){
				maxtmp*=d;
			}
			max+=j*maxtmp;
		}
		if(i>max) break;
		
		if(d==8&&i<2177398) {
			i=2177398;
			tmp=i;
		}
		if(d==9&&i<44317195) {
			i=44317195;
			tmp=i;
		}
		while(tmp>0){
			checkarr[tmp%d]++;
			if(checkarr[tmp%d]>1) {
				check=0;
				break;
			}
			tmp/=d;
		}
		for(int j=0;j<d;j++){
			if(checkarr[j]!=1) check=0;
		}
		if(check==1){
			printf("%lld",i);
			return 0;
		}
	}
	printf("-1");
}