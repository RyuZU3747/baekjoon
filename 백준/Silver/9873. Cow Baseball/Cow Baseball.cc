#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int n, ans;
vector<int> ar;
vector<int> st;
void backtrac(int num, int bef){
    if(num==3){
        if(2*(st[1]-st[0]) >= st[2] - st[1]&& st[2]-st[1] >= st[1]-st[0]) ans++;
        return;
    }
    for(int i=bef+1;i<n;i++){
        st.push_back(ar[i]);
        backtrac(num+1,i);
        st.pop_back();
    }
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        ar.push_back(a);
    }
    sort(ar.begin(),ar.end());
    backtrac(0,-1);
    cout<<ans;
}