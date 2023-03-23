#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int tar;cin>>tar;
    int n;cin>>n;
    map<int,int> button;
    for(int i=0;i<n;i++){
        int t;cin>>t;
        button[t] = 1;
    }
    int ans = abs(tar-100);
    for(int i=0;i<=1000000;i++){
        int no = 0;
        int len = 0;
        int tmp = i;
        if(i==0 && button[0]==1) no = 1;
        while(tmp){
            if(button[tmp%10]==1) no = 1;
            tmp /= 10;
            len++;
        }
        if(no) continue;
        if(i<10) len = 1;
        ans = min(ans,len+abs(tar-i));
    }
    cout<<ans;
}