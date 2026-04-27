#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

typedef struct infor{
	char pass[21];
	char address[21];
}IINN;
IINN info[100001];
int cmp(const void *a, const void *b){
	const IINN *n1 = (const IINN*)a;
	const IINN *n2 = (const IINN*)b;
	return strcmp(n1->address,n2->address);
}

int bs(const char* find, int n){
	int front=0, rear=n-1;
	int mid=(front+rear)/2;
	
	while(front<=rear){
		mid=(front+rear)/2;
		if(strcmp(info[mid].address,find)==0){
			printf("%s\n",info[mid].pass);
			return 1;
		}
		else if(strcmp(info[mid].address,find)<0) front=mid+1;
		else rear=mid-1;
	}
	return 0;
}

int main(){
	int n,m;
	char find[21];
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		scanf(" %s %s",info[i].address,info[i].pass);
	}
	qsort(info,n,sizeof(info[0]),cmp);
	for(int i=0;i<m;i++){
		scanf(" %s",find);
		bs(find,n);
	}
}