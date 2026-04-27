#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long
#10830

int arr[10][10],a[10][10];//arr원본, a는 현재, tmp는 다음
int tmp[10][10],ans[10][10];
long long int b, n;

void multi(int a1[][10],int b[][10]){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			tmp[i][j]=0;
			for(int k=0;k<n;k++){
				tmp[i][j]+=a1[i][k]*b[k][j];
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a1[i][j]=tmp[i][j]%1000;
		}
	}
}

void divide(ll int b){
	if(b==1) return;
	if(b!=1){
		divide(b/2);
		multi(a,a);
	}
	if(b%2==1){
		multi(a,arr);
		return;
	}
	else{
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++) ans[i][j]=a[i][j];
		}
	}
}

int main(){
	scanf("%d %lld",&n,&b);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&arr[i][j]);
			a[i][j]=arr[i][j];
			if(i==j) ans[i][j]=1;
		}
	}
	
	divide(b);
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%d ",a[i][j]%1000);
		}
		printf("\n");
	}	
}