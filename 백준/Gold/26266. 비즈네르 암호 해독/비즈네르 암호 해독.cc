#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

string arr;
int fail[200200];

void failfunc(string s){
	int len = s.length(),j=0;
	for(int i=1;i<len;i++){
		while(j>0&&s[i]!=s[j]) j=fail[j-1];
		if(s[i]==s[j]){
			fail[i]=++j;
		}
	}
}

int main(){
    string a, b;cin>>a>>b;
    for(int i=0;i<a.length();i++){
        arr.push_back(b[i]-'A');
        arr[i] += 26;
        arr[i] -= a[i]-'A';
        arr[i] %= 26;
    }
    failfunc(arr);
    int idx = fail[arr.length()-1];
    if(arr.length()%(arr.length()-idx)!=0){
        for(int i=0;i<arr.length();i++){
            int tmp = arr[i]+'A'-1;
            if(tmp<'A'){
                tmp+=26;
            }
            if(tmp>'Z'){
                tmp-=26;
            }
            cout<<(char)(tmp);
        }
    }
    else{
        for(int i=0;i<arr.length()-idx;i++){
            int tmp = arr[i]+'A'-1;
            if(tmp<'A'){
                tmp+=26;
            }
            if(tmp>'Z'){
                tmp-=26;
            }
            cout<<(char)(tmp);
        }
    }
}