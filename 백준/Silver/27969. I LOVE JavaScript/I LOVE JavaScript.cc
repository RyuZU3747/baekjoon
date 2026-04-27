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
    string s;
    getline(cin, s);
    vector<pair<char,int>> st;
    ll ans = 0;
    int len = 0;
    ll byt = 0;
    for(int i=0;i<s.length();i++){
        if(s[i]=='['){
            st.push_back({'[', byt});
            byt = 0;
        }
        if(s[i]==' '){
            if(s[i-1]>='0'&&s[i-1]<='9') byt += 8;
            if((s[i-1]>='a'&&s[i-1]<='z')||(s[i-1]>='A'&&s[i-1]<='Z')) byt += len+12;          
            len = 0;
        }
        if(s[i]==']'){
            ans += byt + 8;
            byt = st.back().second;
            st.pop_back();
        }
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z')) len++;
    }
    cout<<ans;
}