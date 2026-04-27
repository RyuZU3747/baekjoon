#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

int comp(const void* a, const void* b){
	int a1 = *(int*)a;
	int a2 = *(int*)b;
	if(a1>a2) return -1;
	else if(a2>a1) return 1;
	else return 0;
}

int main(){
	int n,su[51],zerocnt=0,minuscnt=0,j;
	ll int ans=0;
	scanf("%d",&n);
	for(int i=0;i<51;i++) su[i]=0;
	for(int i=0;i<n;i++){
		scanf("%d",&su[i]);
		if(su[i]==0)zerocnt++;
		if(su[i]<0)minuscnt++;
	}
	qsort(su,n,sizeof(int),comp);
	for(int i=0;i<n;i++){
		if(su[i]<0){
			if(minuscnt%2==0){
				for(j=0;j<minuscnt;j++){
					ans += su[j+i]*su[i+j+1];
					j++;
				}
			}
			else{
				if(zerocnt==0) ans += su[i];
				
				for(j=1;j<minuscnt;j++){
					ans += su[j+i]*su[i+j+1];
					j++;
				}
			}
			break;
		}
		if(su[i+1]>1){
			ans += su[i]*su[i+1];
			i++;
		}
		else ans += su[i];
	}
	printf("%lld",ans);
}