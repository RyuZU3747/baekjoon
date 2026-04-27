#include <bits/stdc++.h>
#define ll long long int
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
	FASTIO;
	int n;cin>>n;
	priority_queue<int> pq;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		if(x == 0){
			if(pq.empty()) cout<<0<<'\n';
			else{
				cout<<-pq.top()<<'\n';
				pq.pop();
			}
		}
		else
			pq.push(-x);
	}
}