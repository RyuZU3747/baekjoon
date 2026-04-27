#include <stdio.h>

int main() {
	int s1,s2, acc1=1, acc2=1;
	int a1,a2,a3,a4;
	scanf("%d %d",&s1,&s2);
	for(int i=0;i<s1;i++){
		scanf("%d %d",&a1,&a2);
		if(a1!=a2) acc1=0;
	}
	for(int i=0;i<s2;i++){
		scanf("%d %d",&a3,&a4);
		if(a3!=a4) acc2=0;
	}
	if(acc1==1&&acc2==1) printf("Accepted");
	else if(acc1==0) printf("Wrong Answer");
	else if(acc1==1&&acc2==0) printf("Why Wrong!!!");
}