#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int main(){
	int n, arr[1000001],lis[1000001],back=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	lis[0]=-123456789;
	for(int i=0;i<n;i++){
		if(lis[back-1]<arr[i]) lis[back++]=arr[i];
		else lis[lower_bound(lis,lis+back,arr[i])-lis] = arr[i];
	}
	printf("%d",back);
}