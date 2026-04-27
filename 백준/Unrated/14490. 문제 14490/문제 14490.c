// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int fr, re,x=1;
    scanf("%d:%d",&fr,&re);
    for(int i=1;i<=fr&&i<=re;i++){
        if(fr%i==0&&re%i==0){
            x=i;
        }
    }
    if(x==0)    printf("%d:%d",fr,re);
    else if(x!=0)    printf("%d:%d",fr/x,re/x);
}