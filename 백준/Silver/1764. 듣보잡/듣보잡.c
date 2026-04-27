#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

char hear[500000][21];

int cmp(const void *a, const void *b){
	return strcmp((char*)a,(char*)b);
}

int bs(const char* find, int n){
	int front=0, rear=n-1;
	int mid=(front+rear)/2;
	while(front<=rear){
		mid=(front+rear)/2;
		if(strcmp(hear[mid],find)==0) return 1;
		else if(strcmp(hear[mid],find)<0) front=mid+1;
		else rear=mid-1;
	}
	return 0;
}

int main(){
	char see[21], hearsee[1000000][21];
	int n,m,cnt=0;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf(" %s",hear[i]);
	}
	qsort(hear,n,sizeof(hear[0]),cmp);
	for(int i=0;i<m;i++){
		scanf(" %s",see);
		if(bs(see,m)==1){;
			strcpy(hearsee[cnt],see);
			cnt++;
		}
	}
	qsort(hearsee,cnt,sizeof(hearsee[0]),cmp);
	printf("%d\n",cnt);
	for(int i=0;i<cnt;i++){
		printf("%s\n",hearsee[i]);
	}
}