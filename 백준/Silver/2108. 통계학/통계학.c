#include <stdio.h>
#include <stdlib.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int cmp(const int *a, const int *b){
    int n1 = *(int*)a;
    int n2 = *(int*)b;
	
    return n1-n2;
}

int main(){
    int n,sum=0,max=-5000,min=5000,cm=0,most;
    int arr[500001];
    int cnt[8001];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
        if(arr[i]>max) max=arr[i];
        if(arr[i]<min) min=arr[i];
        cnt[arr[i]+4000]++;
    }
    for(int i=0;i<8001;i++){
        if(cnt[i]>cm){
            most=i-4000;
            cm=cnt[i];
        }
    }
    for(int i=0;i<8001;i++){
        if(cm==cnt[i]){
            if(most<i-4000){
                most=i-4000;
                break;
            }
        }
    }
    qsort(arr,n,sizeof(int),cmp);
	if((double)sum/n>-1&&(double)sum/n<0)printf("0\n");
    else printf("%0.f\n",(double)sum/n);
    printf("%d\n",arr[n/2]);
    printf("%d\n",most);
    printf("%d\n",max-min);
}