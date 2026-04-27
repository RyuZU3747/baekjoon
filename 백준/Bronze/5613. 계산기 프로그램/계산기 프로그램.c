#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int res=0,a;
    char b;
    scanf("%d",&a);
    res=a;
    do{
    	scanf(" %c",&b);
    	if(b=='='){
    		printf("%d",res);
    		return 0;
		}
    	scanf("%d",&a);
    	switch(b){
    		case '+':
    			res+=a;
    			break;
    		case '-':
    			res-=a;
				break;
			case '/':
				res/=a;
				break;
			case '*':
				res*=a;
				break;
		}
	}while(b!='=');
	printf("%d",res);
}