#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

struct ar{
	int a;
	int b;
};

int cmp(const void* a, const void* b){
	ar a1 = *(ar*)a;
	ar a2 = *(ar*)b;
	if(a1.a>a2.a) return 1;
	else if(a1.a<a2.a) return -1;
	else return 0;
}

int main(){
	int n,lis[100001],back=0,ordarr[100001];
	ar arr[100001];
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d %d",&arr[i].a,&arr[i].b);
	qsort(arr,n,sizeof(ar),cmp);
	lis[0]=-100000002;
	for(int i=0;i<n;i++){
		if(lis[back-1]<arr[i].b){
			ordarr[i]=back;
			lis[back++]=arr[i].b;
		}
		else{
			ordarr[i]=lower_bound(lis,lis+back,arr[i].b)-lis;
			lis[lower_bound(lis,lis+back,arr[i].b)-lis] = arr[i].b;
		}
	}
	int len = back;
	vector<int> ansarr;
	back--;
	for(int i=n-1;i>=0;i--){
		if(ordarr[i]==back){
			ansarr.push_back(arr[i].b);
			back--;
		}
	}
	
	printf("%d\n",n-len);
	
	for(int i=0;i<n;i++){
		int flag=0;
		for(int j=0;j<len;j++){
			if(arr[i].b==ansarr[j]){
				flag=1;
				break;
			}
		}
		if(!flag) printf("%d\n",arr[i].a);
	}
}