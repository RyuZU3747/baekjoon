#include <stdio.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int arr[1024][1024];
int sortret(int ar[4]){
	for(int i=0;i<4;i++){
		for(int j=i;j<4;j++){
			if(ar[i]>ar[j]) swap(ar[i],ar[j]);
		}
	}
	return ar[2];
}
int pool(int n){
	int temp[4],v;
	for(int i=0;i<n;i+=2){
		for(int j=0;j<n;j+=2){		
			temp[0]=arr[i][j];
			temp[1]=arr[i][j+1];
			temp[2]=arr[i+1][j];
			temp[3]=arr[i+1][j+1];
			v=sortret(temp);
			if(n==1){
				return v;
			}
			arr[i/2][j/2]=v;
		}
	}
	return pool(n/2);
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	printf("%d",pool(n));
}