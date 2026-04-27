#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    ll n,b,c;cin>>n>>b>>c;
    vector<int> arr(n);
    ll sum = 0;
    for(auto &x:arr){
        cin>>x;
        sum += x;
    }
    if(b < c){
        cout<<sum * b;
        return 0;
    }
    arr.push_back(0);
    arr.push_back(0);
    ll ans = 0;
    for(int i=0;i<n;i++){
        if(arr[i+1] > arr[i+2]){
            if(arr[i] && arr[i+1] > arr[i+2]){
                ll mn = min(arr[i], arr[i+1] - arr[i+2]);
                arr[i] -= mn;
                arr[i+1] -= mn;
                ans += (b+c)*mn;
            }
            if(arr[i] && arr[i+1] && arr[i+2]){
                ll mn = min(arr[i+2], min(arr[i], arr[i+1]));
                arr[i] -= mn;
                arr[i+1] -= mn;
                arr[i+2] -= mn;
                ans += (b+2*c) * mn;
            }
        }
        else{
            if(arr[i] && arr[i+1] && arr[i+2]){
                ll mn = min(arr[i+2], min(arr[i], arr[i+1]));
                arr[i] -= mn;
                arr[i+1] -= mn;
                arr[i+2] -= mn;
                ans += (b+2*c) * mn;
            }
            if(arr[i] && arr[i+1]){
                ll mn = min(arr[i], arr[i+1]);
                arr[i] -= mn;
                arr[i+1] -= mn;
                ans += (b+c)*mn;
            }
        }

        if(arr[i]){
            ans += b * arr[i];
            arr[i] = 0;
        }

    }
    cout<<ans;
}