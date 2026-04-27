#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int comp(const void* a, const void* b){
	ll a1 = *(ll*) a;
	ll a2 = *(ll*) b;
	if(a1>a2) return 1;
	else if(a1<a2) return -1;
	else return 0;
}

int main(){
	ll n,arr[100001], min = 3000000001,ans[2];
	scanf("%lld",&n);
	for(int i=0;i<n;i++) scanf("%lld",&arr[i]);
	qsort(arr, n, sizeof(ll), comp);
	int idx;
	for(int i=0;i<n;i++){
		int front = i+1, back = n-1;
		while(front<back){
			if(arr[i]+arr[front]+arr[back]==0){
				printf("%lld %lld %lld",arr[i],arr[front],arr[back]);
				return 0;
			}
			if(abs(arr[i]+arr[front]+arr[back])<min){
				min = abs(arr[i]+arr[front]+arr[back]);
				idx = i;
				ans[0] = arr[front];
				ans[1] = arr[back];
			}
			if(arr[i]+arr[front]+arr[back]<0) front++;
			else back--;
		}
	}
	printf("%lld %lld %lld",arr[idx],ans[0],ans[1]);
}