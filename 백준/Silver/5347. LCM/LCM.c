// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int b, s,n,x=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d %d",&b,&s);
        if(b<s){
            int tm = b;
            b=s;
            s=tm;
        }
        for(int j=1;j<=b&&j<=s;j++){
            if(b%j==0&&s%j==0) x=j;
        }
        if(x==0) printf("%lld\n",(unsigned long long int)b*s);
        else printf("%lld\n",(unsigned long long int)b*s/x);
        x=0;
    }
}