/*
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣴⣶⣾⣾⣿⣿⣿⣿⣿⣷⣶⣦⣤⣄⡀⠀⠀⣴⡄⢸⣯⣤⣴⣦⣤⣦⡀⠀⣠⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣄⣠⣤⣶⣾⣿⣿⡿⣿⣿⣻⢿⣽⢯⣟⣾⣳⢯⡿⣽⣻⣟⡿⣿⣿⣿⣦⣽⡿⠻⠟⠉⠙⠉⠻⠏⠛⠿⣿⣄⣤⣤⡄⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⣿⣷⡿⠿⠿⠿⠿⠿⢿⣿⣾⣳⣯⢿⣽⣳⣟⡾⣽⣳⣿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣿⣾⠄⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⠿⠛⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠻⠿⣿⣾⣷⢯⣟⡷⣯⣿⣿⣿⡦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡷⢶⣆⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⢿⣿⣽⣳⣯⢿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣅⡀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠻⣿⣿⣿⣿⣿⣧⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⠿⠇⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢀⣾⡟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⠛⠛⠻⢿⣷⣤⣤⣀⣤⣤⣴⣾⣿⡛⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣰⣿⠋⠀⠀⠀⠀⠀⠀⠀⣼⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣧⡀⠀⠀⠀⠀⠀⢺⣿⣿⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣴⣿⠁⠀⠀⠀⠀⠀⠀⠀⢸⡿⠁⠀⠀⠀⢰⣤⡄⠀⠀⠀⠀⠀⠀⠀⣽⡿⣿⡀⠀⠀⠀⠘⠛⣻⣿⣤⠀⠀⠀⠀⠀⢸⣿⡿⠛⠉⠀⣠⡿⠟⣻⡷⠀⠀⠀
⠀⠀⠀⠀⣼⡿⠀⠀⠀⢠⣤⠀⠀⠀⠀⣿⠇⠀⠀⠀⠀⢸⣿⣿⠀⠀⠀⠀⠀⠀⠀⣿⡇⢻⣷⠀⠀⠀⠀⠈⠋⣻⣷⣦⣀⣀⣤⣴⣿⣿⣿⣀⣴⡿⠟⠿⣶⣿⡁⠀⠀⠀
⠀⠀⠀⣼⡟⠁⠀⠀⠀⣼⡟⠀⠀⠀⣸⡟⠀⠀⠀⠀⠀⣸⡟⣿⡇⠀⠀⠀⠀⠀⠀⣿⠁⠈⣿⡆⠀⠀⠀⠀⠈⠛⢿⡏⢿⣯⣿⣿⣿⣿⣿⣿⣿⣴⣦⣶⣶⡿⠃⠀⠀⠀
⠀⠀⣼⡿⣡⣦⠀⠀⠀⣿⡇⠀⠀⠀⣾⡇⠀⠀⠀⠀⢠⣿⠁⢿⡧⠀⠀⠀⠀⠀⠀⣿⠂⠀⢸⣷⡀⠀⠀⠀⠀⠀⢸⣯⠀⠀⣿⣿⣿⣿⣿⣟⣿⣿⣿⣿⣿⣿⣷⣶⣤⣄
⠀⢠⣿⣽⣿⡿⠀⠀⠀⣿⠇⠀⠀⠀⣿⠇⠀⠀⠀⠀⣸⡏⠀⢸⣗⠀⠀⠀⣴⣶⢰⣿⠀⠀⠀⢿⣧⠀⠀⢀⡀⣤⣼⣿⠀⠀⣿⣿⣿⣿⣿⣿⣿⡿⣟⣷⣻⢾⣽⣻⢿⡿
⠀⣾⣿⡏⣿⡇⠀⠀⠀⣿⡄⠀⠀⢸⣿⠀⣴⡆⠀⢰⣿⠁⠀⢼⡯⠀⠀⠀⣿⣿⣿⡟⠀⠀⠀⠘⣿⣴⡾⠿⢷⣿⣿⣿⠁⠠⣿⣿⣿⣿⣿⣿⣿⣿⣽⢾⣽⣻⢾⡽⣯⣟
⠀⣿⣿⠃⢿⣇⠀⠀⠀⣿⡆⠀⠀⢸⣿⣼⢿⣷⣴⣿⣃⣀⣀⢻⡷⠀⠀⠀⣿⠟⠟⢀⣤⣶⣶⣾⣿⣿⣶⣶⣾⣿⣼⣿⠆⠀⠙⣿⣿⣿⣿⣿⣿⣿⣿⣿⡾⣽⢯⣟⡷⣯
⠐⣿⣏⠀⠸⣿⡄⠀⠀⢹⣿⠀⠀⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡷⠿⠻⠛⠟⠀⠀⠈⠋⣻⣿⣿⡟⢻⣿⣿⡇⠁⠰⣿⡅⠀⣸⣿⣿⣿⣿⣿⣿⣻⣿⣿⣿⣿⣟⡾⣽⣻
⠠⣿⡇⠀⢀⣿⣧⠀⠀⠘⣿⡄⠀⠀⢻⣏⠀⢸⣿⡿⠯⠈⠻⢿⡇⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡋⠁⠈⣉⣹⠇⠀⢈⣿⠇⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣿⣿⣿⣷⣿
⠀⣿⡇⣠⣾⣿⣿⠁⠀⠀⣿⣧⠀⣴⣶⣿⡆⠀⠻⠷⡤⠴⠤⠾⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠙⠩⠉⠉⠀⢀⣠⣾⣏⡀⢠⣿⡏⣿⣿⣿⣿⣿⡿⣽⢾⣽⣿⣿⣿⣿⣿
⠀⠙⣱⣿⣿⢿⣿⠁⠀⠀⣸⣿⣧⣿⡏⣿⡟⠀⢀⠀⡄⡈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠀⢀⣰⣶⣿⣿⣿⣿⣷⣾⣿⠁⠈⠋⠀⢸⣿⡿⣽⣿⣿⣿⣿⣿⣿⣿
⠀⣼⣿⡿⣽⣻⣿⣾⣿⣷⣼⣿⡀⠉⠀⠘⠿⣦⣅⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⣶⡾⠟⠋⠁⠙⠋⢀⣿⡿⠛⠃⠀⠀⠀⠀⣸⣿⣿⠟⠉⠛⢿⠿⡟⠛⠁
⣼⣿⣿⣽⣷⣿⣿⣿⣿⣿⠛⢿⣷⡀⠀⠀⠀⣿⡟⠛⠛⠻⠟⢿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣤⣤⣀⠀⠀⢸⡿⠀⠀⠀⠀⠀⠀⠀⣾⡟⠁⠀⠀⠀⠀⠀⠀⠀⠀
⢺⣿⣿⣿⣿⣿⠛⡟⣿⣿⡅⠀⠛⣷⠂⠀⠀⢸⣧⠀⠀⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠉⠙⢻⣷⣦⣿⡇⠀⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠈⠙⠙⠿⡿⠁⠀⠀⣼⣿⠀⠀⠀⣾⡄⠀⣠⣼⣿⣷⣾⠟⠋⠀⠙⠿⣿⣿⣿⣍⣉⣥⣿⣿⣋⠀⠀⠀⠀⠀⠈⣿⡟⠀⠀⠀⠀⠀⣿⣄⢀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣾⡇⠀⠀⢸⡿⠂⠀⠟⠻⢿⠛⠁⠀⠀⠀⣀⣴⣿⣿⣿⣯⣙⣿⣿⣿⠛⠿⡆⠀⠀⣀⣴⣿⣴⣦⠀⠀⠀⣼⠟⠛⠿⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣿⣇⣀⠀⠸⠇⠀⠠⠈⢀⠸⠛⠻⠿⠟⠛⠿⠻⠻⠿⠋⠉⠛⠉⠛⠃⡀⠄⢂⠀⠅⠀⡙⠋⠀⡀⠀⠑⠂⠀⠉⡐⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⠿⠠⠂⣈⠀⢰⢠⠈⠠⢑⠂⠀⡂⢀⡀⠐⠀⠀⠂⢆⠤⢄⠂⠀⢀⠠⠈⠁⠀⠀⠀⠀⠡⠄⠁⠁⠀⠉⠀⡁⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢻⡟⠀⡀⠆⠀⡁⢰⢰⠠⢃⣀⠃⠅⠀⡇⠀⠇⠁⠠⠠⡄⡐⡀⠀⠀⢠⢸⠀⢀⠀⡢⠂⠀⡠⠀⠃⠇⡀⢀⠐⠔⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠠⠡⠐⠘⠀⠑⠒⠂⠁⠀⠣⠃⠀⠀⠠⠅⠁⠐⠌⠀⠑⠃⠈⠂⠈⠒⠒⠒⠂⠀⠉⠀⠉⠁⠀⠈⠀⠈⠁⠊⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
*/
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define pll pair<ll,ll>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    ll t;cin>>t;
    int n;cin>>n;
    vector<ll> arr(n);
    for(auto &x: arr) cin>>x;
    int m;cin>>m;
    vector<ll> brr(m);
    for(auto &x: brr) cin>>x;
    vector<ll> prea(n+1);
    vector<ll> preb(m+1);
    vector<ll> as;
    vector<ll> bs;
    for(int i=1;i<=n;i++) prea[i] = prea[i-1] + arr[i-1];
    for(int i=1;i<=m;i++) preb[i] = preb[i-1] + brr[i-1];
    
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            as.push_back(prea[j] - prea[i-1]);
        }
    }
    for(int i=1;i<=m;i++){
        for(int j=i;j<=m;j++){
            bs.push_back(preb[j] - preb[i-1]);
        }
    }
    sort(as.begin(), as.end());
    sort(bs.begin(), bs.end());

    ll ans = 0;
    for(auto e: as){
        ll right = upper_bound(bs.begin(), bs.end(), t - e) - bs.begin();
        ll left = lower_bound(bs.begin(), bs.end(), t - e) - bs.begin();
        ans += right - left;
    }
    cout<<ans;
}