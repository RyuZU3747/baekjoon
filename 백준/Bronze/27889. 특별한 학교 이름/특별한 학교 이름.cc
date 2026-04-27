#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
	string s;cin>>s;
	if(s.compare("NLCS")==0) cout<<"North London Collegiate School";
	if(s.compare("BHA")==0) cout<<"Branksome Hall Asia";
	if(s.compare("KIS")==0) cout<<"Korea International School";
	if(s.compare("SJA")==0) cout<<"St. Johnsbury Academy";
}