#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/

double d(double x, double y, double k){
	double A = sqrt(x*x-k*k);
	double B = sqrt(y*y-k*k);
	return A*B/(A+B);
}

int main(){
	double x,y,c,ans;
	cin>>x>>y>>c;
	double left = 0, right = max(x,y);
	while(right-left > 0.0001){
		double mid = (right+left)/2;
		if(d(x,y,mid)>c){
			left = mid;
		}
		else right = mid;
		ans = mid;
	}
	cout<<ans;
}
