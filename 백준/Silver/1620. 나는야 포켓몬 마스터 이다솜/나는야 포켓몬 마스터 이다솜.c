#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

typedef struct infor{
	int num;
	char name[21];
}IINN;
IINN info[100001];

int numcmp(const void *a, const void *b){
	return ((IINN*)a)->num - ((IINN*)b)->num;
}

int namecmp(const void *a, const void *b){
	const IINN *n1 = (const IINN*)a;
	const IINN *n2 = (const IINN*)b;
	return strcmp(n1->name,n2->name);
}

int numbs(int intfind, int n){
	int front=0, rear=n-1;
	int mid=(front+rear)/2;
	while(front<=rear){
		mid=(front+rear)/2;
		if(info[mid].num==intfind){
			printf("%s\n",info[mid].name);
			return 1;
		}
		else if(info[mid].num<intfind) front=mid+1;
		else rear=mid-1;
	}
	return 0;
}
int namebs(const char* find, int n){
	int front=0, rear=n-1;
	int mid=(front+rear)/2;
	
	while(front<=rear){
		mid=(front+rear)/2;
		if(strcmp(info[mid].name,find)==0){
			printf("%d\n",info[mid].num+1);
			return 1;
		}
		else if(strcmp(info[mid].name,find)<0) front=mid+1;
		else rear=mid-1;
	}
	return 0;
}

int main(){
	int n,m,intfind;
	char find[21], fastname[100001][21];
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		info[i].num = i;
		scanf(" %s",info[i].name);
		strcpy(fastname[i],info[i].name);
	}
	qsort(info,n,sizeof(info[0]),namecmp);
	
	for(int i=0;i<m;i++){
		scanf(" %s",find);
		if(find[0]>=48&&find[0]<=57){
			intfind = atoi(find);
			printf("%s\n",fastname[intfind-1]);
		}
		else{
			namebs(find,n);
		}
	}
}