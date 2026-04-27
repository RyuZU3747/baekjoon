#include <stdio.h>

int main(){
	int n,cot=0,af=0,n1,n2,af1,af2;
	scanf("%d",&n);
	af=n;
	while(1){
		n1=af/10;
		n2=af%10;
		af1=n2;
		af2=n1+n2;
		if(af2>=10) af2=af2%10;
		af=af1*10+af2;
		cot+=1;
		if(af==n)break;
	}
	printf("%d",cot);
}