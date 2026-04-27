#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int moon[13];

int main(){
    int n;cin>>n;
    int yoon = 0;
    if(n%4==0&&n%100!=0||n%400==0) yoon = 1;
    int w;cin>>w;
    int ans = 0;
    int cntw[8];
    memset(cntw,0,sizeof cntw);
    for(int day = 1;day<=31;day++){
        cntw[w]++;
        w%=7;w++;
    }
    for(int i=1;i<=7;i++){
        if(cntw[i]==5) ans++;
    }
    memset(cntw,0,sizeof cntw);
    if(yoon){
        for(int day = 1;day<=29;day++){
            cntw[w]++;
            w%=7;w++;
        }
        for(int i=1;i<=7;i++){
            if(cntw[i]==5) ans++;
        }
    }
    else{
        for(int day = 1;day<=28;day++){
            cntw[w]++;
            w%=7;w++;
        }
        for(int i=1;i<=7;i++){
            if(cntw[i]==5) ans++;
        }
    }
    memset(cntw,0,sizeof cntw);
    for(int day = 1;day<=31;day++){
        cntw[w]++;
        w%=7;w++;
    }
    for(int i=1;i<=7;i++){
        if(cntw[i]==5) ans++;
    }
    memset(cntw,0,sizeof cntw);
    for(int day = 1;day<=31;day++){
        cntw[w]++;
        w%=7;w++;
    }
    for(int i=1;i<=7;i++){
        if(cntw[i]==5) ans++;
    }
    memset(cntw,0,sizeof cntw);
    for(int day = 1;day<=31;day++){
        cntw[w]++;
        w%=7;w++;
    }
    for(int i=1;i<=7;i++){
        if(cntw[i]==5) ans++;
    }
    memset(cntw,0,sizeof cntw);
    for(int day = 1;day<=31;day++){
        cntw[w]++;
        w%=7;w++;
    }
    for(int i=1;i<=7;i++){
        if(cntw[i]==5) ans++;
    }
    memset(cntw,0,sizeof cntw);
    for(int day = 1;day<=31;day++){
        cntw[w]++;
        w%=7;w++;
    }
    for(int i=1;i<=7;i++){
        if(cntw[i]==5) ans++;
    }
    memset(cntw,0,sizeof cntw);
    for(int day = 1;day<=31;day++){
        cntw[w]++;
        w%=7;w++;
    }
    for(int i=1;i<=7;i++){
        if(cntw[i]==5) ans++;
    }
    memset(cntw,0,sizeof cntw);
    for(int day = 1;day<=30;day++){
        cntw[w]++;
        w%=7;w++;
    }
    for(int i=1;i<=7;i++){
        if(cntw[i]==5) ans++;
    }
    memset(cntw,0,sizeof cntw);
    for(int day = 1;day<=30;day++){
        cntw[w]++;
        w%=7;w++;
    }
    for(int i=1;i<=7;i++){
        if(cntw[i]==5) ans++;
    }
    memset(cntw,0,sizeof cntw);
    for(int day = 1;day<=30;day++){
        cntw[w]++;
        w%=7;w++;
    }
    for(int i=1;i<=7;i++){
        if(cntw[i]==5) ans++;
    }
    memset(cntw,0,sizeof cntw);
    for(int day = 1;day<=30;day++){
        cntw[w]++;
        w%=7;w++;
    }
    for(int i=1;i<=7;i++){
        if(cntw[i]==5) ans++;
    }
    cout<<ans;
}