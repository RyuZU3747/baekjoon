#include <stdio.h>
#include <stdlib.h>

int compare(const void* a,const void* b){
	int a1=*(int*)a;
	int a2=*(int*)b;
	return a1-a2;
	
}

int main(){
	int a[20001]={0},n,tmp,min=123456789,index;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	qsort(a,n,sizeof(int),compare);
	for(int i=0;i<n;i++){
		tmp=0;
		for(int j=0;j<n;j++){
			if(i<j)	tmp+=a[j]-a[i];
			else tmp+=a[i]-a[j];
		}
		if(min>tmp){
			min=tmp;
			index=a[i];
		}
	}
	printf("%d",index);
}