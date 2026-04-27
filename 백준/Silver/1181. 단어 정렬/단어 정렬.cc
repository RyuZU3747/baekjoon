#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

struct coord{
	int x;
	char name[51];
};

int cmp(const void *a, const void *b){
	coord a1 = *(coord*) a;
	coord a2 = *(coord*) b;
	if(a1.x>a2.x) return 1;
	else if(a1.x<a2.x) return -1;
	else{
		return (strcmp(a1.name,a2.name));
	}
}

int main(){
	int n;
	coord ar[20001];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf(" %s",ar[i].name);
		ar[i].x = strlen(ar[i].name);
	}
	qsort(ar,n,sizeof(coord),cmp);
	for(int i=0;i<n;i++){
		if(!strcmp(ar[i].name,ar[i-1].name)) continue;
		printf("%s\n",ar[i].name);
	}
}