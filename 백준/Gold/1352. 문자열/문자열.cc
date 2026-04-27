#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

vector<int> loc;
int n;
int ok = 0;

void check(int idx, int len){
    if(len==n){
        ok = 1;
        return;
    }
    for(int i=2*idx;i > idx;i--){
        len += i;
        loc.push_back(i);
        if(len <= n) check(i, len);
        if(ok) return;
        len -= i;
        loc.pop_back();
    }
}

int main(){
    cin>>n;
    check(1, 1);
    if(ok==0){
        cout<<-1;
        return 0;
    }
    char ans[101];
    int cnt[27];
    memset(cnt, 0, sizeof cnt);
    memset(ans, 0, sizeof ans);
    ans[1] = 'A';
    char st = 'B';
    for(auto e: loc){
        ans[e] = st;
        cnt[st-'A'] = e-1;
        st++;
    }
    st = 1;
    for(int i=1;i<=n;i++){
        if(ans[i]==0){
            ans[i] = st+'A';
            cnt[st]--;
        }
        if(cnt[st]==0) st++;
    }
    for(int i=1;i<=n;i++) cout<<ans[i];
}