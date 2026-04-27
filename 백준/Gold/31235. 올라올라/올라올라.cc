#include <bits/stdc++.h>

#define ll long long int 

#define FASTIO cin.tie(0), ios_base::sync_with_stdio(0)

using namespace std;

int main(){

    FASTIO;

    int n;cin>>n;

    vector<int> arr(n);

    for(auto &e: arr) cin>>e;

    arr.push_back(1234567890);

    int ans = 0;

    int cur = -1;

    int idx = 0;

    for(int i=0;i<=n;i++){

        if(arr[i] >= cur){

            ans = max(ans, i-idx);

            idx = i;

            cur = arr[i];

        }

    }

    cout<<ans;

}