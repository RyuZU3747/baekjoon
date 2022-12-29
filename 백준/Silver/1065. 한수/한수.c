#include <stdio.h>

int hansu(int a){
	int z,x,c,count=0;
	if(a<100) return a;
	else{
		for(int i=100;i<=a;i++){
			z=i/100;
			x=(i%100)/10;
			c=i%10;
			if(x-z==c-x) count++;
		}
	}
	return 99+count;
}

int main(){
	int n,ans;
	scanf("%d",&n);
	ans=hansu(n);
	printf("%d",ans);
}