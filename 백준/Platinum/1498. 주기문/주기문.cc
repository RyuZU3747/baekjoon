#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int fail[1000010];

int main(){
    string s;cin>>s;
    for(int i=1,j=0;i<s.length();i++){
        while(j>0&&s[i]!=s[j]) j = fail[j-1];
        if(s[i]==s[j]) fail[i] = ++j;

        int len = fail[i];
        if(len == 0) continue;
        int rpt = (i+1) - len;
        if((i+1)%rpt==0){
            cout<<i+1<<' '<<(i+1)/rpt<<'\n';
        }
    }
}