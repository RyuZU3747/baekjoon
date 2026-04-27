#include <bits/stdc++.h>
#define ll long long int
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;


int main(){
    string s;
    cin>>s;
    while(s.compare(".")!=0){
        int fail[1000010];
        memset(fail, 0, sizeof fail);
        for(int i=1,j=0;i<s.length();i++){
            while(j>0&&s[i]!=s[j]) j = fail[j-1];
            if(s[i]==s[j]) fail[i] = ++j;
        }
        int len = fail[s.length()-1];
        int rpt = (s.length()) - len;
        if(s.length()%rpt==0){
            cout<<s.length()/rpt<<'\n';
        }
        else cout<<1<<'\n';
        cin>>s;
    }
}