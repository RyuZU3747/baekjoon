#include <stdio.h>
#include <string.h>
int main(){
	char s[10];
	long long a=0;
	for(int i=0;i<3;i++){
	scanf("%s",&s);
	if(i==0){
		if(strcmp(s,"black")==0) a+=0*10;
		else if(strcmp(s,"brown")==0) a+=1*10;
		else if(strcmp(s,"red")==0) a+=2*10;
		else if(strcmp(s,"orange")==0) a+=3*10;
		else if(strcmp(s,"yellow")==0) a+=4*10;
		else if(strcmp(s,"green")==0) a+=5*10;
		else if(strcmp(s,"blue")==0) a+=6*10;
		else if(strcmp(s,"violet")==0) a+=7*10;
		else if(strcmp(s,"grey")==0) a+=8*10;
		else if(strcmp(s,"white")==0) a+=9*10;
		else break;
	}
	else if(i==1){
		if(strcmp(s,"black")==0) a+=0;
		else if(strcmp(s,"brown")==0) a+=1;
		else if(strcmp(s,"red")==0) a+=2;
		else if(strcmp(s,"orange")==0) a+=3;
		else if(strcmp(s,"yellow")==0) a+=4;
		else if(strcmp(s,"green")==0) a+=5;
		else if(strcmp(s,"blue")==0) a+=6;
		else if(strcmp(s,"violet")==0) a+=7;
		else if(strcmp(s,"grey")==0) a+=8;
		else if(strcmp(s,"white")==0) a+=9;
		else break;
	}
	else if(i==2){
		if(strcmp(s,"black")==0) a*=1;
		else if(strcmp(s,"brown")==0)  a*=10;
		else if(strcmp(s,"red")==0)    a*=100;
		else if(strcmp(s,"orange")==0) a*=1000;
		else if(strcmp(s,"yellow")==0) a*=10000;
		else if(strcmp(s,"green")==0)  a*=100000;
		else if(strcmp(s,"blue")==0)   a*=1000000;
		else if(strcmp(s,"violet")==0) a*=10000000;
		else if(strcmp(s,"grey")==0)   a*=100000000;
		else if(strcmp(s,"white")==0)  a*=1000000000;
		else break;
	}
	}
	printf("%lld",a);
}