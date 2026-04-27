#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;
    cin>>n;
    map<string, char> cng;
    cng["@"] = 'a';
    cng["["] = 'c';
    cng["!"] = 'i';
    cng[";"] = 'j';
    cng["^"] = 'n';
    cng["0"] = 'o';
    cng["7"] = 't';
    cng["\\'"] = 'v';
    cng["\\\\'"] = 'w';

    for(int i=0;i<n;i++){
        int cnt = 0;
        string s;cin>>s;
        string ans = "";
        int len = s.length();
        for(int j=0;j<len;j++){
            string tmp = "";
            tmp += s[j];
            if(s[j]=='\\'){
                tmp += s[j+1];
                if(s[j+1]=='\\'){
                    tmp += s[j+2];
                    j += 2;
                }
                else j+= 1;
            }
            if(cng[tmp]!=0){
                cnt++;
                s[j] = cng[tmp];
            }
            ans += s[j];
        }
        len = ans.length();
        if(cnt*2>=len) cout<<"I don't understand\n";
        else cout<<ans<<'\n';
    }
}