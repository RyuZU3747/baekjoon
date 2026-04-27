#include <bits/stdc++.h>
#define ll long long int
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
	FASTIO;
	int n,k;cin>>n>>k;
	vector<pair<ll, ll>> A(3);
	for(auto &e: A) cin>>e.first>>e.second;

	ll cur = A[0].second;
	int no = 0;
	
	for(int i=0;i<n;i++){
		if(cur < A[0].first) no = 1; // 첫 끼에 효과가 끊어진 경우

		cur = min(A[1].second, cur + k);
		if(cur < A[1].first) no = 1; // 두 번째 끼에 효과가 끊어진 경우

		cur = min(A[2].second, cur + k);
		if(cur < A[2].first) no = 1; // 세 번째 끼에 효과가 끊어진 경우

		cur = cur + k;
		if(i!=n-1 && cur < A[0].first + 1440) no = 1; // 다음 날로 가지 못하는 경우
		cur %= 1440;
	}

	if(no) cout<<"NO\n";
	else cout<<"YES\n";
}