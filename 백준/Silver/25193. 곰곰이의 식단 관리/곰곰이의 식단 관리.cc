#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int main(){
	double n,chick = 0,other = 0;
	cin>>n;
	char s;
	for(int i=0;i<n;i++){
		cin>>s;
		if(s=='C') chick++;
		else other++;
	}
	other++;
	cout<<ceil(chick/other);
}