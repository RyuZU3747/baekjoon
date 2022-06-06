#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int main(){
	cin.tie(0);
	ios_base::sync_with_stdio(0);
	int n,gom = 0;
	cin>>n;
	set<string> cnt;
	while(n--){
		int flag=0;
		string tmp;
		cin>>tmp;
		if(tmp=="ENTER"){
			cnt.clear();
			continue;
		}
		else if(cnt.find(tmp)==cnt.end()){
			gom++;
			cnt.insert(tmp);
		}
	}
	cout<<gom;
}