#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

struct coord{
	int x;
	char name[101];
};

int cmp(const void *a, const void *b){
	coord a1 = *(coord*) a;
	coord a2 = *(coord*) b;
	if(a1.x>a2.x) return 1;
	else if(a1.x<a2.x) return -1;
}

int main(){
	int n;
	coord ar[100001];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %s",&ar[i].x,ar[i].name);
	}
	qsort(ar,n,sizeof(coord),cmp);
	for(int i=0;i<n;i++){
		printf("%d %s\n",ar[i].x,ar[i].name);
	}
}