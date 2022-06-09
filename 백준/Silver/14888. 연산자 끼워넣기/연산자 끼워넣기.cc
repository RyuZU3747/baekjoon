#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int n;
int a[12];
int oper[4];
int mn = 1234567891;
int mx = -1234658791;


void backtrac(int val, int idx){
	if(idx==n){
		if(val<mn) mn=val;
		if(val>mx) mx=val;
		return;
	}
	for(int i=0;i<4;i++){
		if(oper[i]>0){
			oper[i]--;
			if(i==0) backtrac(val+a[idx],idx+1);
			if(i==1) backtrac(val-a[idx],idx+1);
			if(i==2) backtrac(val*a[idx],idx+1);
			if(i==3) backtrac(val/a[idx],idx+1);
			oper[i]++;
		}
	}
}


int main(){
	cin>>n;
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<4;i++) cin>>oper[i];
	backtrac(a[0],1);
	cout<<mx<<'\n'<<mn;
}