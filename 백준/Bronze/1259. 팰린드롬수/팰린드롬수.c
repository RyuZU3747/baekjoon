// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n;
    while(1){
    scanf("%d",&n);
    if(n==0) break;
        if(n<10) printf("yes\n");
        else if(n<100){
            if(n/10==n%10) printf("yes\n");
            else printf("no\n");
        }
        else if(n<1000){
            if(n%10==n/100) printf("yes\n");
            else printf("no\n");
        }
        else if(n<10000){
            if(n%10==n/1000){
                if((n%1000)/100==(n%100)/10) printf("yes\n");
                else printf("no\n");
            }
            else printf("no\n");
        }
        else{
            if(n%10==n/10000){
                if((n%10000)/1000==(n%100)/10) printf("yes\n");
                else printf("no\n");
            }
            else printf("no\n");
        }
    }
}