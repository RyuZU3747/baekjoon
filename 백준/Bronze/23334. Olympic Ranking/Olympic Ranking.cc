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

struct nation{
	int gold;
	int silv;
	int bron;
	string name;
};

bool cmp(nation a, nation b){
	if(a.gold<b.gold){
		return 0;
	}
	if(a.gold==b.gold){
			if(a.silv<b.silv){
				return 0;
			}
			else if(a.silv==b.silv){
				if(a.bron<b.bron) return 0;
				
			}
		}
	return 1;
}

int main(){
	int n;
	vector<nation> na;
	cin>>n;
	for(int i=0;i<n;i++){
		nation tmp;
		cin>>tmp.gold;
		cin>>tmp.silv;
		cin>>tmp.bron;
		getline(cin, tmp.name);
		na.push_back(tmp);
	}
	sort(na.begin(),na.end(),cmp);
	cout<<&na[0].name[1];
}