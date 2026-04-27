#include <stdio.h>
#include <math.h>
int main() {
	int n,a,c=0,v=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a);
		if(a==1) c++;
		else if(a==0) v++;
	}
	if(c>v) printf("Junhee is cute!");
	else printf("Junhee is not cute!");
}
