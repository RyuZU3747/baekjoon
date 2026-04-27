#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a) : (b))
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a==b&&b==c) printf("%d",10000+a*1000);
    else if(a==b) printf("%d",1000+a*100);
    else if(b==c) printf("%d",1000+b*100);
    else if(a==c) printf("%d",1000+a*100);
    else printf("%d",Max(a,Max(b,c))*100);
}