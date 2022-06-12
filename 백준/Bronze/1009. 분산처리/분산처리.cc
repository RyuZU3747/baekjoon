#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int main(){
	int t;
	cin>>t;
	
	while(t--){
		int a, b;
		cin>>a>>b;
		a%=10;
		if(a==0) cout<<10;
		else if(a==1||a==5||a==6) cout<<a;
		else if(a==2){
			b%=4;
			if(b==0) cout<<6;
			if(b==1) cout<<2;
			if(b==2) cout<<4;
			if(b==3) cout<<8;
		}
		else if(a==3){
			b%=4;
			if(b==0) cout<<1;
			if(b==1) cout<<3;
			if(b==2) cout<<9;
			if(b==3) cout<<7;
		}
		else if(a==4){
			b%=2;
			if(b==0) cout<<6;
			if(b==1) cout<<4;
		}
		else if(a==7){
			b%=4;
			if(b==0) cout<<1;
			if(b==1) cout<<7;
			if(b==2) cout<<9;
			if(b==3) cout<<3;
		}
		else if(a==8){
			b%=4;
			if(b==0) cout<<6;
			if(b==1) cout<<8;
			if(b==2) cout<<4;
			if(b==3) cout<<2;
		}
		else if(a==9){
			b%=2;
			if(b==0) cout<<1;
			if(b==1) cout<<9;
		}
		cout<<'\n';
	}
}