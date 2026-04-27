#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
	string n;cin>>n;
	int sum = 0;
	int iszero = 0;
	for(int i=0;i<n.length();i++){
		sum += (n[i]-'0');
		if(n[i]=='0') iszero = 1;
	}
	if(iszero == 0 || sum % 3 !=0){
		cout<<-1;
	}
	else{
		sort(n.begin(), n.end());
		for(int i=n.length()-1;i>=0;i--) cout<<n[i];
	}
}