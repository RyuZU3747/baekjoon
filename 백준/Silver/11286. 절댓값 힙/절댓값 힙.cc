#include <bits/stdc++.h>
#define ll long long int
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int heap[400010];
int sz = 0;

void push(int x){
	heap[++sz] = x;
	int par = sz/2, chd = sz;
	while(chd > 1 && abs(heap[chd]) <= abs(heap[par])){
		if(abs(heap[chd]) < abs(heap[par])){
			swap(heap[chd], heap[par]);
		}
		else if(heap[chd] < heap[par]){
			swap(heap[chd], heap[par]);
		}
		chd = par;
		par = chd/2;
	}
}

int pop(){
	if(sz == 0) return 0;
	int ret = heap[1];
	heap[1] = heap[sz--];
	int par = 1;
	int chd;
	if(abs(heap[par*2]) == abs(heap[par*2+1])) chd = heap[par*2] < heap[par*2+1] ? par*2 : par*2+1;
	else chd = abs(heap[par*2]) < abs(heap[par*2+1]) ? par*2 : par*2 + 1;
	while(chd <= sz && abs(heap[chd]) <= abs(heap[par])){
		swap(heap[chd], heap[par]);
		par = chd;
		if(abs(heap[par*2]) == abs(heap[par*2+1])) chd = heap[par*2] < heap[par*2+1] ? par*2 : par*2+1;
		else chd = abs(heap[par*2]) < abs(heap[par*2+1]) ? par*2 : par*2 + 1;
	}
	return ret;
}

int main(){
	FASTIO;
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int x;cin>>x;
		if(x==0) cout<<pop()<<'\n';
		else push(x);
	}
}