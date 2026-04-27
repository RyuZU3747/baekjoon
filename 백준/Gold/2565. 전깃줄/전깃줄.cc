#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

struct line{
	int a;
	int b;
};

int comp(const void* a1, const void* a2){
	line n1 = *(line*)a1;
	line n2 = *(line*)a2;
	if(n1.a<n2.a) return -1;
	else if(n1.a==n2.a) return 0;
	else return 1;
}
	
int main(){
	int n, lis[1000001],back=0;
	line arr[501];
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d %d",&arr[i].a,&arr[i].b);
	qsort(arr, n, sizeof(line), comp);
	lis[0]=-123456789;
	for(int i=0;i<n;i++){
		if(lis[back-1]<arr[i].b) lis[back++]=arr[i].b;
		else lis[lower_bound(lis,lis+back,arr[i].b)-lis] = arr[i].b;
	}
	printf("%d",n-back);
}