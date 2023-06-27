#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

vector<int> pi(51);
ll chk;
int su;
int n;
int depch[52];
vector<int> sts[52];

void bactrac(int dep, int nu, int len, int idx){
	if(dep == su){
		cout<<nu<<'\n';
		for(int i=0;i<dep;i++){
			for(auto e: sts[i]){
				cout<<e<<' ';
			}
			cout<<'\n';
		}
		exit(0);
	}
	for(int i=idx;i<n;i++){
		if(chk&(1LL<<i)) continue;
		chk ^= (1LL<<i);
		sts[dep].push_back(pi[i]);
		len += pi[i];
		if(len==nu){
			depch[dep] = 1;
			bactrac(dep+1, nu, 0, 0);
		}
		if(len < nu && depch[dep]==0) bactrac(dep, nu, len, i+1);
		len -= pi[i];
		sts[dep].pop_back();
		chk ^= (1LL<<i);
	}
}

int main(){
	FASTIO;
	cin>>n;
	int sum = 0;
	int mx = -1;
	for(int i=0;i<n;i++){
		cin>>pi[i];
		sum += pi[i];
		mx = max(mx,pi[i]);
	}
	sort(pi.begin(),pi.end(),[](int a, int b){return a>b;});
	for(int i=mx;i<sum;i++){
		if(sum%i) continue;
		su = sum/i;
		for(auto e:sts) e.clear();
		for(int j=0;j<52;j++) depch[j] = 0;
		chk = 0;
		bactrac(0, i, 0, 0);
	}
}