#include <stdio.h>
#include <stdlib.h>
int qs(const void* a1, const void* a2){
    if(*(int*)a1>*(int*)a2) return 1;
    else if(*(int*)a1==*(int*)a2) return 0;
    else return -1;
}
int main()
{
    int t;
    scanf("%d",&t);
    int ar[10];
    for(int i=0;i<t;i++){
        for(int j=0;j<10;j++){
            scanf("%d",&ar[j]);
        }
        for(int j=0;j<t;j++){
            qsort(ar,10,sizeof(int),qs);
        }
        printf("%d\n",ar[7]);
    }
    
    return 0;
}