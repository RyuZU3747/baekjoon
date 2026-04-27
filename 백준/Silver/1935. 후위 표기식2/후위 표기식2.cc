#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    string s;cin>>s;
    vector<double> st;
    vector<int> alp(27);
    for(int i=0;i<n;i++) cin>>alp[i];
    for(int i=0;i<s.length();i++){
        if(s[i]>='A'&&s[i]<='Z') st.push_back(alp[s[i]-'A']);
        else{
            double a = st.back();
            st.pop_back();
            double b = st.back();
            st.pop_back();
            if(s[i]=='*') st.push_back(a*b);
            else if(s[i]=='/') st.push_back(b/a);
            else if(s[i]=='-') st.push_back(b-a);
            else st.push_back(a+b);
        }
    }
    cout<<fixed;
    cout.precision(2);
    cout<<st.back();
}