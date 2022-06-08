#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int main(){
	int n;
	string arr[10];
	ll alp[26] = {0,};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		int len = arr[i].size();
		for(int j=0;j<len;j++){
			alp[arr[i][j]-65] += pow(10,len-j-1);
		}
	}
	
	int mut[26]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	int idx;
	
	for(int i=9;i>-1;i--){
		ll max = -1;
		for(int j=0;j<26;j++){
			if(mut[j]==-1&&max<alp[j]){
				max = alp[j];
				idx = j;
			}
		}
		mut[idx] = i;
	}

	ll ans = 0;
	for(int i=0;i<26;i++){
		ans += alp[i]*mut[i];
	}
	cout<<ans;
}