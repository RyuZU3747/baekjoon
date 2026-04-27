#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

vector<char> st;

int main(){
	int n,k;cin>>n>>k;
	char s[500001];
	for(int i=0;i<n;i++) cin>>s[i];
	int cnt = 0;
	st.push_back(s[0]);
	for(int i=1;i<n;i++){
		while(!st.empty()&&cnt<k&&st.back() < s[i]){
			cnt++;
			st.pop_back();
		}
		st.push_back(s[i]);
	}
	string ans;
	while(!st.empty()){
		ans += st.back();
		st.pop_back();
	}
	for(int i=n-1-cnt;i>=k-cnt;i--){
		cout<<ans[i];
	}
}