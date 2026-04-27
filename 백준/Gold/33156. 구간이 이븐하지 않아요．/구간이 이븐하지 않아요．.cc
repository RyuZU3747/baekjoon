#pragma GCC optimize("O3")
#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <map>
#include <unordered_map>
#define ll long long int
#define MOD 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n;cin>>n;
	vector<int> arr(n);
	for(auto &x: arr) cin>>x;
	int ans = 0;
	unordered_map<ll, int> cnt;
	for(int i=0;i<n-1;i++){
		cnt.clear();
		int l = i, r = i+1;
		int dif = 0;
		while(l>=0 && r<n){
			if(cnt[arr[l]] >= 0) dif++;
			else dif--;
			cnt[arr[l]]++;
			if(cnt[arr[r]] <= 0) dif++;
			else dif--;
			cnt[arr[r]]--;
			if(dif == 0) ans = max(ans, r-l+1);
			l--,r++;
		}
	}
	cout<<ans;
}