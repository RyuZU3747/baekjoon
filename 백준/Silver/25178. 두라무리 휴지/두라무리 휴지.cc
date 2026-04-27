#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int main(){
	int n;
	char cur[100001], New[100001];
	char exptvcur[100001], exptvnew[100001];
	int cntc[26],cntn[26];
	cin>>n;
	cin>>cur;
	cin>>New;
	if(cur[0]!=New[0]||cur[n-1]!=New[n-1]){
		cout<<"NO";
		return 0;
	}
	int lenc = 0, lenn = 0;
	for(int i=0;i<n;i++){
		cntc[cur[i]-'a']++;
		cntn[New[i]-'a']++;
		if(cur[i]!='a'&&cur[i]!='e'&&cur[i]!='i'&&cur[i]!='o'&&cur[i]!='u'){
			exptvcur[lenc] = cur[i];
			lenc++;
		}
		if(New[i]!='a'&&New[i]!='e'&&New[i]!='i'&&New[i]!='o'&&New[i]!='u'){
			exptvnew[lenn] = New[i];
			lenn++;
		}
	}
	for(int i=0;i<26;i++){
		if(cntc[i]!=cntn[i]){
			cout<<"NO";
			return 0;
		}
	}
	if(strcmp(exptvnew,exptvcur)) cout<<"NO";
	else cout<<"YES";
}