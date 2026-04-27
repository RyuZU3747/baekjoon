#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    string s;cin>>s;
    vector<int> st;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0'&&s[i]<='9') st.push_back(s[i]-'0');
        else{
            int a = st.back();
            st.pop_back();
            int b = st.back();
            st.pop_back();
            if(s[i]=='*') st.push_back(a*b);
            else if(s[i]=='/') st.push_back(b/a);
            else if(s[i]=='-') st.push_back(b-a);
            else st.push_back(a+b);
        }
    }
    cout<<st.back();
}