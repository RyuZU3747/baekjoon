#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int main(){
	int n;
	char lotto[100001];
	cin>>n;
	cin>>lotto;
	int cnt=1,flag = 0;
	for(int i=1;i<n;i++){
		
			if(abs(lotto[i]-lotto[i-1])==1){
				cnt++;
				if(cnt>=5) flag = 1;
			}
			else cnt = 1;
		
	}
	if(flag) cout<<"YES";
	else cout<<"NO";
}