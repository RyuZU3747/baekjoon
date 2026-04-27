#pragma GCC optimize("O3")
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#define ll long long int
#define MOD 1000000007
#define cmprs(x) sort(x.begin(), x.end()),x.erase(unique(x.begin(), x.end()),x.end())
using namespace std;

int cnt[26];

int main(){
	ios_base::sync_with_stdio(0), cin.tie(0);
	int n;cin>>n;
	string a,b;cin>>a>>b;
	for(int i=0;i<n;i++){
		cnt[b[i]-'a']++;
	}
	for(int i=0;i<n;i++){
		cnt[a[i]-'a']--;
		if(cnt[a[i]-'a'] < 0) cnt[a[i]-'a'] = 0;
	}
	int ans = 0;
	for(int i=0;i<26;i++){
		ans += cnt[i];
	}
	cout<<ans;
}