#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int main(){
	int n, arr[100001],lis[100001],back=0,ordarr[100001];
	scanf("%d",&n);
	for(int i=0;i<n;i++) scanf("%d",&arr[i]);
	lis[0]=-123456789;
	for(int i=0;i<n;i++){
		if(lis[back-1]<arr[i]){
			ordarr[i]=back;
			lis[back++]=arr[i];
		}
		else{
			ordarr[i]=lower_bound(lis,lis+back,arr[i])-lis;
			lis[lower_bound(lis,lis+back,arr[i])-lis] = arr[i];
		}
	}
	int len = back;
	vector<int> ansarr;
	back--;
	for(int i=n-1;i>=0;i--){
		if(ordarr[i]==back){
			ansarr.push_back(arr[i]);
			back--;
		}
	}
	printf("%d\n",len);
	for(int i=len-1;i>=0;i--) printf("%d ",ansarr[i]);
}