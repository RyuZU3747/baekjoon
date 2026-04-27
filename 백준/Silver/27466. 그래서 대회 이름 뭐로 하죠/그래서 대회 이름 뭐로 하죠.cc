#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int n,m;cin>>n>>m;
    string s;cin>>s;
    string ans;
    int sidx = s.length()-1;
    while(sidx>=0){
        if(s[sidx]!='A'&&s[sidx]!='E'&&s[sidx]!='I'&&s[sidx]!='O'&&s[sidx]!='U'){
            ans += s[sidx];
            sidx--;
            break;
        }
        sidx--;
    }
    int cnt = 0;
    while(sidx>=0){
        if(s[sidx]=='A'){
            ans += s[sidx];
            sidx--;
            cnt++;
            if(cnt==2) break;
            else continue;
        }
        sidx--;
    }
    while(sidx>=0){
        ans += s[sidx];
        sidx--;
        if(ans.length()==m) break;
    }
    if(ans.length()!=m) cout<<"NO";
    else{
        cout<<"YES\n";
        for(int i=m-1;i>=0;i--) cout<<ans[i];
    }
}