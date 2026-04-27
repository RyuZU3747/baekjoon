#include <stdio.h>

int main(){
    int a[4],low=100,sum=0;
    int a1,a2;
    for(int i=0;i<4;i++){
        scanf("%d",&a[i]);
        if(a[i]<low) low=a[i];
        sum+=a[i];
    }
    sum-=low;
    scanf("%d",&a1);
    scanf("%d",&a2);
    if(a1>a2) sum+=a1;
    else sum+=a2;
    printf("%d",sum);
}
