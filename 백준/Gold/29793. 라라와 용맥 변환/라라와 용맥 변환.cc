#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

string operator * (string a, unsigned int b) {
    string output = "";
    while (b--) {
        output += a;
    }
    return output;
}

int main(){
    FASTIO;
    int n,h;cin>>n>>h;
    string s;cin>>s;
    int scnt = 0;
    int rcnt = 0;
    int wcnt = 0;
    for(int i=0;i<n;i++){
        if(s[i]=='S') scnt++;
        if(s[i]=='R') rcnt++;
        if(s[i]=='W') wcnt++;
    }
    if(h==1){
        cout<<0;
        return 0;
    }
    if(h==2){
        int cnt = 0;
        for(int i=1;i<n;i++){
            if(s[i-1]==s[i]){
                cnt++;
                i++;
            }
        }
        cout<<cnt;
        return 0;
    }
    if(h==3){
        int cnt = 1234567890;
        string t1 = "SWR";
        string t2 = "SRW";
        string t3 = "WRS";
        string t4 = "WSR";
        string t5 = "RWS";
        string t6 = "RSW";
        int mul = (n+3)/3;
        t1 = t1*mul;
        t2 = t2*mul;
        t3 = t3*mul;
        t4 = t4*mul;
        t5 = t5*mul;
        t6 = t6*mul;
        int t = 0;
        for(int i=0;i<n;i++){
            if(s[i]!=t1[i]) t++;
        }
        cnt = min(cnt, t);
        t = 0;
        for(int i=0;i<n;i++){
            if(s[i]!=t2[i]) t++;
        }
        cnt = min(cnt, t);
        t = 0;
        for(int i=0;i<n;i++){
            if(s[i]!=t3[i]) t++;
        }
        cnt = min(cnt, t);
        t = 0;
        for(int i=0;i<n;i++){
            if(s[i]!=t4[i]) t++;
        }
        cnt = min(cnt, t);
        t = 0;
        for(int i=0;i<n;i++){
            if(s[i]!=t5[i]) t++;
        }
        cnt = min(cnt, t);
        t = 0;
        for(int i=0;i<n;i++){
            if(s[i]!=t6[i]) t++;
        }
        cnt = min(cnt, t);
        cout<<cnt;
        return 0;
    }
    if(h>3){
        if(n<=3){
            int cnt = 1234567890;
            string t1 = "SWR";
            string t2 = "SRW";
            string t3 = "WRS";
            string t4 = "WSR";
            string t5 = "RWS";
            string t6 = "RSW";
            int t = 0;
            for(int i=0;i<n;i++){
                if(s[i]!=t1[i]) t++;
            }
            cnt = min(cnt, t);
            t = 0;
            for(int i=0;i<n;i++){
                if(s[i]!=t2[i]) t++;
            }
            cnt = min(cnt, t);
            t = 0;
            for(int i=0;i<n;i++){
                if(s[i]!=t3[i]) t++;
            }
            cnt = min(cnt, t);
            t = 0;
            for(int i=0;i<n;i++){
                if(s[i]!=t4[i]) t++;
            }
            cnt = min(cnt, t);
            t = 0;
            for(int i=0;i<n;i++){
                if(s[i]!=t5[i]) t++;
            }
            cnt = min(cnt, t);
            t = 0;
            for(int i=0;i<n;i++){
                if(s[i]!=t6[i]) t++;
            }
            cnt = min(cnt, t);
            cout<<cnt;
        }
        else cout<<-1;
    }
}