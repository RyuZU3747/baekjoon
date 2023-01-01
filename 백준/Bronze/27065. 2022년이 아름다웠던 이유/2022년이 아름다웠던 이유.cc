#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;


int main(){
    int t;cin>>t;
    int arr[5001];//-1 부족 0 완전 1 과잉
    for(int i=1;i<5001;i++){
        int sum = 1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){
                sum += j;
                if(j!=i/j) sum += i/j;
            }
        }
        if(i>sum) arr[i] = -1;
        else if(i<sum) arr[i] = 1;
        else arr[i] = 0;
    }
    arr[1] = -1;
    arr[2] = -1;
    arr[3] = -1;
    while(t--){
        int n;cin>>n;
        vector<int> yak;
        yak.push_back(1);
        for(int j=2;j*j<=n;j++){
            if(n%j==0){
                yak.push_back(j);
                if(j!=n/j) yak.push_back(n/j);
            }
        }
        // cout<<arr[n]<<' ';
        // for(auto x: yak) cout<<x<<':'<<arr[x]<<' ';
        // cout<<'\n';
        int flag = 1;
        if(arr[n]==1){
            for(auto x: yak){
                if(arr[x]==1){
                    flag = 0;
                }
            }
        }
        else flag = 0;
        if(flag==1) cout<<"Good Bye\n";
        else cout<<"BOJ 2022\n";
    }
}