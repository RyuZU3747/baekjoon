#include <stdio.h>

int main() {
	int n,s,g,p,d,value[37],sum=0;
	char mvp[37];
	scanf("%d %d %d %d %d",&n,&s,&g,&p,&d);
	scanf(" %s",mvp);
	for(int i=0;i<n;i++){
		if(mvp[i]=='B'){
			if(i!=0) value[i] = (s-1)-value[i-1];
			else value[i]=s-1;
			sum += value[i];
		}
		else if(mvp[i]=='S'){
			if(i!=0) value[i] = (g-1)-value[i-1];
			else value[i]=g-1;
			sum += value[i];
		}
		else if(mvp[i]=='G'){
			if(i!=0) value[i] = (p-1)-value[i-1];
			else value[i]=p-1;
			sum += value[i];
		}
		else if(mvp[i]=='P'){
			if(i!=0) value[i] = (d-1)-value[i-1];
			else value[i]=d-1;
			sum += value[i];
		}
		else if(mvp[i]=='D'){
			value[i]=d;
			sum += value[i];
		}
	}
	printf("%d",sum);
}