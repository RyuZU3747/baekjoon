#include <stdio.h>

int main(){
	int n;
	double s[1000],sum=0,max=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lf",&s[i]);
		if(s[i]>=max)max=s[i];
	}
	for(int i=0;i<n;i++){
		s[i]=s[i]/max*100;
		sum+=s[i];
	}
	printf("%f",sum/n);
}