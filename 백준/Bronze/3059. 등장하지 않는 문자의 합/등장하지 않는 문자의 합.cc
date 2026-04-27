#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){       
        int ans = 2015;
        char s[1001];
        cin>>s;
        int visit[27];
        for(int i=0;i<27;i++) visit[i] = 0;
        for(int i=0;i<strlen(s);i++){
            if(visit[s[i]-'A']==0) ans-=s[i];
            visit[s[i]-'A']=1;
        }
        cout<<ans<<'\n';
    }
}