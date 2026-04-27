#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int gaesu[27];

int main(){
    FASTIO;
    string s;cin>>s;
    int len = s.length();
    for(int i=0;i<len;i++) gaesu[s[i]-'a']++;
    int n;cin>>n;
    vector<string> a;
    for(int i=0;i<n;i++){
        string t;cin>>t;
        a.push_back(t);
    }
    for(auto e:a){
        int tmpsu[27];
        memset(tmpsu, 0, sizeof tmpsu);
        int yes = 0;
        if(e.length() < len){
            cout<<"NO\n";
            continue;
        }
        for(int i=0;i<len;i++) tmpsu[e[i]-'a']++;
        for(int i=0;i<=e.length()-len;i++){
            int dif = 0;
            for(int j=0;j<26;j++){
                dif += abs(tmpsu[j]-gaesu[j]);
            }
            if(e.length()==len){
                if(dif==2) yes = 1;
            }
            else if(dif==2 || dif == 0) yes = 1;
            if(yes) break;
            tmpsu[e[i]-'a']--;
            tmpsu[e[i+len]-'a']++;
        }
        if(yes) cout<<"YES\n";
        else cout<<"NO\n";
    }
}