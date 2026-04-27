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
    int n;cin>>n;
    set<string> st;
    string che = "Cheese";
    int cnt = 0;
    for(int i=0;i<n;i++){
        string t;cin>>t;
        st.insert(t);
    }
    for(auto s: st){
        int no = 0;
        int len = s.length();
        if(len < 6) continue;
        for(int j=len-6;j<len;j++){
            if(s[j]!=che[j-len+6]) no = 1;
        }
        if(no==0) cnt++;
    }
    if(cnt>=4) cout<<"yummy";
    else cout<<"sad";
}