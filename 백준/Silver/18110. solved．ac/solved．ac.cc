#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int comp(const void* a, const void* b){
	double a1 = *(double*) a;
	double a2 = *(double*) b;
	if(a1>a2) return 1;
	else if(a1<a2) return -1;
	else return 0;
}

int main(){
	double n, arr[1000001],sum = 0;
	cin>>n;
	for(int i=0;i<n;i++) cin>>arr[i];
	int cut = (n*0.15)+0.5;
	qsort(arr, n, sizeof(double), comp);
	int ans = 0;
	for(int i=cut;i<n-cut;i++){
		sum += arr[i];
		ans = sum/(n-cut*2)+0.5;
	}
	cout<<ans;
}