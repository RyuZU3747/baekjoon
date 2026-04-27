#include <stdio.h>
#include <math.h>
int main(){
	int r[10]={0},a,b,c,d[15];
	long long int x;
	scanf("%d %d %d",&a,&b,&c);
	x=a*b*c;
	for(int i=0;i<15;i++){
		if(x%(int)pow(10,i)==x)break;
		d[i]=(x%(int)pow(10,i+1))/pow(10,i);
		switch (d[i]){
			case 0:
				r[0]+=1;
				break;
			case 1:
				r[1]+=1;
				break;
			case 2:
				r[2]+=1;
				break;
			case 3:
				r[3]+=1;
				break;
			case 4:
				r[4]+=1;
				break;
			case 5:
				r[5]+=1;
				break;
			case 6:
				r[6]+=1;
				break;
			case 7:
				r[7]+=1;
				break;
			case 8:
				r[8]+=1;
				break;
			case 9:
				r[9]+=1;
				break;
		}
	}
	for(int i=0;i<10;i++) printf("%d\n",r[i]);
}