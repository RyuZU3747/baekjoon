#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

ll ccw(ll x1, ll x2, ll x3, ll y1, ll y2, ll y3){
    return x1*y2+x2*y3+x3*y1-(x2*y1+x3*y2+x1*y3);
}

int main(){
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	int tmp = ccw(a,c,e,b,d,f);
	if(tmp<0) cout<<"-1";
	else if(tmp>0) cout<<"1";
	else cout<<"0";
}