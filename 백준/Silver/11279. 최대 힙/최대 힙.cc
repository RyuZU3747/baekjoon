#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	priority_queue<int> pq;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int tmp;
		cin>>tmp;
		if(!tmp){
			if(pq.empty()) cout<<"0"<<'\n';
			else{
				cout<<pq.top()<<'\n';
				pq.pop();
			}
		}
		else{
			pq.push(tmp);
		}
	}
}