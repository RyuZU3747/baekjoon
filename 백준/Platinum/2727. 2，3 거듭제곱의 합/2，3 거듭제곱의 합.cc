#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

vector<pii> ans;
int n;

void recur(int two){
    if(n<=0) return;
    int sub3 = 0;
    int sub2 = 0;
    if(n%2){
        while(pow(3,sub3+1)<=n) sub3++;
        ans.push_back({two,sub3});
        n -= pow(3,sub3);
        recur(two);
    }
    else{
        while(n%2==0){
            sub2++;
            n/=2;
        }
        if(n==1){
            n--;
            ans.push_back({sub2+two, 0});
        }
        else{
            recur(sub2+two);
        }
    }
}

int main(){
    FASTIO;
    int _;cin>>_;
    while(_--){
        cin>>n;
        if(n==1){
            cout<<1<<'\n'<<0<<' '<<0<<'\n';
            continue;
        }
        ans.clear();
        recur(0);
        cout<<ans.size()<<'\n';
        for(auto e:ans) cout<<e.first<<' '<<e.second<<'\n';
    }
}