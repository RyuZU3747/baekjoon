#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int _;cin>>_;
    while(_--){
        int n;cin>>n;
        int arr[1011];
        int left = 0;
        int right = 0;
        int cnt2 = 0;
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            if(arr[i]==2) cnt2++;
        }
        if(cnt2%2==1){
            cout<<-1<<'\n';
        }
        else{
            right = cnt2;
            for(int i=1;i<n;i++){
                if(arr[i]==2){
                    left++;
                    right--;
                }
                if(left==right){
                    cout<<i<<'\n';
                    break;
                }
            }
        }
    }
}