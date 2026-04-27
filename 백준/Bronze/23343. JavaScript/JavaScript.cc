#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/

int main(){
	string a, b;
	cin>>a>>b;
	int ta = strtol(&a[0],NULL,10);
	int tb = strtol(&b[0],NULL,10);
	if(a!=to_string(ta)){
		cout<<"NaN";
		return 0;
	}
	if(b!=to_string(tb)){
		cout<<"NaN";
		return 0;
	}
	cout<<ta-tb;
}