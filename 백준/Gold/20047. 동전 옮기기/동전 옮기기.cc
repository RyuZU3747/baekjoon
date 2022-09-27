#include <bits/stdc++.h>
#include <algorithm>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/

string s, t;
string tmp;
int n;
int a,b;

void dfs(int idx,int sidx,int ch){
    if(idx==n&&ch==2){
        cout<<"YES";
        exit(0);
        return;
    }
    if(tmp[sidx]==t[idx]){
        dfs(idx+1,sidx+1,ch);
    }
            if(ch==0&&s[a]==t[idx]){
                dfs(idx+1,sidx,ch+1);
            }
            else if(ch==1&&s[b]==t[idx]){
                dfs(idx+1,sidx,ch+1);
            }
    return;
}

int main(){
    cin>>n;
    cin>>s>>t;
    cin>>a>>b;
    for(int i=0;i<s.length();i++){
        if(i!=a&&i!=b) tmp.push_back(s[i]);
    }
    dfs(0,0,0);
    cout<<"NO";
}