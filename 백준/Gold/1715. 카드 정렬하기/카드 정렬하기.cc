#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

priority_queue<int> pq;
vector<int> tmparr;

int main(){
	int n,arr[100001],ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		pq.push(-arr[i]);
	}
	while(pq.size()!=1){
		int a1 = pq.top();pq.pop();
		int a2 = pq.top();pq.pop();
		ans += (a1+a2)*-1;
		pq.push((a1+a2));
	}
	cout<<ans<<'\n';
}