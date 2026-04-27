#include <stdio.h>
	struct fib{
		int co0;
		int co1;
	};
	
	int main(){
		int a,n;
		scanf("%d",&n);
		fib fi[41];
		fi[0].co0=1;
		fi[0].co1=0;
		fi[1].co0=0;
		fi[1].co1=1;
		for(int i=2;i<41;i++){
			fi[i].co0=fi[i-1].co0+fi[i-2].co0;
			fi[i].co1=fi[i-1].co1+fi[i-2].co1;
		}
		for(int i=0;i<n;i++){			
			scanf("%d",&a);
			printf("%d %d\n",fi[a].co0,fi[a].co1);
		}
	}