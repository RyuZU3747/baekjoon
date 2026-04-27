#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int main(){
	int t,n,m,cnt,tmp;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		cnt=0;
		scanf("%d %d",&n,&m);
		for(int j=n;j<=m;j++){
			tmp=j;
			do{
				if(tmp==0) cnt++;
				else if(tmp%10==0) cnt++;
				tmp/=10;
			}while(tmp);
		}
		printf("%d\n",cnt);
	}
}