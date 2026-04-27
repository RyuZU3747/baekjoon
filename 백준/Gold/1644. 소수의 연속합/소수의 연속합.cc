#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

vector<int> sosu;

int main(){
	int n;
	int arr[4000001];
	cin>>n;
	if(n==1){
		cout<<'0';
		return 0;
	}
	for(int i=0;i<4000001;i++) arr[i]=i;
	for(int i=2;i*i<=n;i++){
		for(int j=i*2;j<=n;j+=i) arr[j]=0;
	}
	arr[1]=0;
	for(int i=0;i<=n;i++) if(arr[i]!=0) sosu.push_back(arr[i]);
	
	int cnt = 0, sum = 0;
	int front = 0;
	int rear = 0;
	while(1){
		if(sum<n) sum += sosu[rear++];
		else if(sum>n) sum -= sosu[front++];
		if(rear==sosu.size()) break;
		if(sum==n){
			cnt++;
			sum += sosu[rear++];
		}
	}
	for(int i=0;i<sosu.size();i++) if(sosu[i]==n) cnt++;
	cout<<cnt;
}