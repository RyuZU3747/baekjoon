#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int afail[10001];
int bfail[10001];
string s,a,b;

void failfunc(){
    for(int i=1,j=0;i<a.length();i++){
        while(j > 0 && a[i]!=a[j]) j = afail[j-1];
        if(a[i]==a[j]) afail[i] = ++j;
    }
    for(int i=1,j=0;i<b.length();i++){
        while(j > 0 && b[i]!=b[j]) j = bfail[j-1];
        if(b[i]==b[j]) bfail[i] = ++j;
    }
}

int main(){
    FASTIO;
    cin>>s>>a>>b;
    failfunc();
    vector<int> ast;
    vector<int> bst;
    for(int i=0,j=0;i<s.length();i++){
        while(j>0&&s[i]!=a[j]) j = afail[j-1];
        if(s[i]==a[j]){
            if(j==a.length()-1){
                ast.push_back(i-j);
                j = afail[j];
            }
            else j++;
        }
    }
    for(int i=0,j=0;i<s.length();i++){
        while(j>0&&s[i]!=b[j]) j = bfail[j-1];
        if(s[i]==b[j]){
            if(j==b.length()-1){
                bst.push_back(i-j);
                j = bfail[j];
            }
            else j++;
        }
    }
    set<string> ans;
    for(auto e: ast){
        int st = e;
        for(auto x:bst){
            int ed = x+b.length();
            if(ed-st < a.length() || ed-st < b.length() || st > ed) continue;
            ans.insert(s.substr(st,ed-st));
        }
    }
    //for(auto e: ans) cout<<e<<'\n';
    cout<<ans.size();
}