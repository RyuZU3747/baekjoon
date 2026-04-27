#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll cnt;
string a;
map<ll, int> ck;

void backtrac(int cur, int sum, int cmp){
    if(cur>=a.length()){
        if(sum==cmp&&ck[sum]==0){
            ck[sum] = 1;
            cnt++;
        }
        return;
    }
    string tmp;
    for(int i=cur;i<a.length();i++){
        tmp += a[i];
        int p = stoi(tmp);
        sum += p;
        backtrac(i+1, sum, cmp);
        sum -= p;
    }
}

int main(){
    FASTIO;
    int n;cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        int numc[10] = {0,};
        for(int j=0;j<a.length();j++){
            numc[a[j]-'0']++;
        }
        int only1=1;
        for(int j=2;j<10;j++){
            if(numc[j]>0) only1 = 0;
        }
        if(only1) cout<<"Hello, BOJ 2023!\n";
        else{
            ll sum = 0;
            cnt = 0;
            for(int po = 1;sum<=stoi(a);po++){
                sum = 0;
                ll tmp = 1;
                for(int j=0;j<a.length();j++){
                    tmp = 1;
                    for(int k=0;k<po;k++) tmp *= (a[j]-'0');
                    sum += tmp;
                }
                ck = map<ll,int>();
                backtrac(0, 0, sum);
            }
            cout<<cnt<<'\n';
        }
    }
}