#include <bits/stdc++.h>
#define FASTIO cin.tie(0), ios_base::sync_with_stdio(0)
#define ll long long int
using namespace std;

int chk[1000001];

int main(){
    FASTIO;
    int n,k;cin>>n>>k;
    vector<int> arr(n);
    for(auto &x: arr) cin>>x;
    int yes = 1;
    vector<vector<int>> idx;
    vector<vector<int>> val;
    for(int i=0;i<n;i++){//arr[i]에 k를 계속 더해서 i를 만들 수 있는가
        if(chk[i]) continue;
        vector<int> it;
        vector<int> vt;

        vt.push_back(arr[i]);
        it.push_back(i);
        int cur = i;
        cur += k;
        cur %= n;
        chk[i] = 1;
        while(cur != i){
            chk[cur] = 1;
            it.push_back(cur);
            vt.push_back(arr[cur]);
            cur += k;
            cur %= n;
        }
        sort(vt.begin(),vt.end());
        sort(it.begin(),it.end());
        idx.push_back(it);
        val.push_back(vt);
    }

    for(int i=0;i<idx.size();i++){
        if(idx[i] != val[i]) yes = 0;
    }



    cout<<(yes ? "YES":"NO");
}