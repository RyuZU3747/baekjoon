#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
	int n;
	int no0[11] = {0,};
	string arr[52];
	ll alp[11] = {0,};
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		int len = arr[i].size();
		no0[arr[i][0]-65] = 1;
		for(int j=0;j<len;j++){
			alp[arr[i][j]-65] += pow(10,len-j-1);
		}
	}
	
	int mut[11]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
	int idx;
	//최솟값이면서 0되는애한테 0주기
	ll min = 1234567891123;
	for(int i=0;i<10;i++){
		if(no0[i]==0&&min>alp[i]){
			min = alp[i];
			idx = i;
		}
	}
	mut[idx] = 0;
	for(int i=9;i>0;i--){
		ll max = -1;
		for(int j=0;j<10;j++){
			if(mut[j]==-1&&max<alp[j]){
				max = alp[j];
				idx = j;
			}
		}
		mut[idx] = i;
	}

	ll ans = 0;
	for(int i=0;i<10;i++){
		ans += alp[i]*mut[i];
	}
	cout<<ans;
}