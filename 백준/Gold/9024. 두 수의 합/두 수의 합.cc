#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int t;cin>>t;
    while(t--){
        int n,k;cin>>n>>k;
        vector<int> arr(1000001);
        for(int i=0;i<n;i++) cin>>arr[i];
        sort(arr.begin(),arr.begin()+n);
        int cnt = 0;
        ll mn = 1234567890;
        for(int i=0;i<n;i++){
            int left = i+1, right = n-1;
            while(left<=right){
                int mid = (left+right) / 2;
                ll sum = arr[i] + arr[mid];
                if(abs(k-sum) < mn){
                    cnt = 1;
                    mn = abs(k-sum);
                }
                else if(abs(k-sum)==mn) cnt++;
                if(sum<=k){
                    left = mid+1;
                }
                else right = mid-1;
            }
        }
        cout<<cnt<<'\n';
    }
}