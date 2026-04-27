#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> stk;
    vector<int> cnt(n);
    vector<int> ans;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        stk.push_back(a);
        cnt[a]++;
        if(stk.size()==1){
            if(a!=1){
                cout<<-1;
                return 0;
            }
            ans.push_back(1);
        }
        else{
            if(stk[i] >= stk[i-1]){
                if(stk[i] - stk[i-1] >= 2){
                    cout<<-1;
                    return 0;
                }
                ans.push_back(cnt[stk[i]]);
            }
            else{
                for(int j=stk[i]+1;j<=stk[i-1];j++) cnt[j] = 0;
                ans.push_back(cnt[stk[i]]);
            }
        }
    }
    for(auto e:ans) cout<<e<<' ';
}