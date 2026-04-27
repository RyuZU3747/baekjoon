#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
	int t;cin>>t;
	while(t--){
		int h,c;cin>>h>>c;
		double dp[201][201]; //h번째, c개 저장중
		double err[201][201]; //i~j 사이의 오차
		vector<int> arr;
		for(int i=0;i<h;i++){
			int a;cin>>a;
			arr.push_back(a);
		}
		for(int i=0;i<h;i++){
			for(int j=0;j<c;j++) dp[i][j] = 200000000;
		}
		dp[0][0] = 0.0;
		dp[0][1] = 0.0;
		for(int i=0;i<h;i++){
			for(int j=i+1;j<h;j++){
				err[i][j] = 0.0;
				for(int k=i+1;k<j;k++) err[i][j] += abs(arr[k] - (arr[i] + (double)(arr[j] - arr[i]) * (k-i) / (j-i)));
			}
		}
			for(int j=1;j<c;j++){
		for(int i=1;i<h;i++){
				for(int k=j-1;k<i;k++){
					dp[i][j] = min(dp[i][j], dp[k][j-1] + err[k][i]);
				}
			}
		}
		cout<<fixed;
		cout.precision(5);
		cout<<dp[h-1][c-1]/h<<'\n';;
	}
}