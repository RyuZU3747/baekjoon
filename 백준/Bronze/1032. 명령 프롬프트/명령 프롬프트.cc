#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    string ans;
    cin>>ans;
    for(int i=1;i<n;i++){
        string tmp;
        cin>>tmp;
        for(int j=0;j<ans.length();j++){
            if(ans[j]!=tmp[j]) ans[j]='?';
        }
    }
    cout<<ans;
}