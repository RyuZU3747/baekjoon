#include <stdio.h>

int main(){
	int a[10001]={0},b;
	for(int i=1;i<10001;i++){
		if(i<10) a[i+i]=1;
		else if(i<100) a[i+i/10+i%10]=1;
		else if(i<1000) a[i+(i/100)+(i%100)/10+i%10]=1;
		else if(i<10000) {
			b=i+(i/1000)+((i%1000)/100)+((i%100)/10)+i%10;
			if(b<10001)	a[b]=1;
		}
	}
	for(int i=1;i<10000;i++){
		if(a[i]==0) printf("%d\n",i);
	}
}