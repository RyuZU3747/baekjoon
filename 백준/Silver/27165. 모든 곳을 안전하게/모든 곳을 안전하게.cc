#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int arr[1000001];

int main(){
    FASTIO;
    int n;cin>>n;
    int cnt1 = 0;
    for(int i=0;i<=n;i++){
        cin>>arr[i];
        if(arr[i]==1) cnt1++;
    }
    int x;cin>>x;
    if(cnt1>2){
        cout<<"NO";
        return 0;
    }
    int flag = 0;
    int an, s;
    if(cnt1==0){
        for(int i=0;i<=n;i++){
            if(i+x<=n&&arr[i]>2&&arr[i+x]>1){
                flag = 1;
                an = i;
                s = i+x;
            }
        }
    }
    else if(cnt1==1){
        for(int i=0;i<=n;i++){
            if(i-x>=0&&arr[i]==1&&arr[i-x]>2){
                flag = 1;
                an = i-x;
                s = i;
            }
            if(i+x<=n&&arr[i]==1&&arr[i+x]>1){
                flag = 1;
                an = i;
                s = i+x;
            }
        }
    }
    else{
        for(int i=0;i<=n;i++){
            if(i+x<=n&&arr[i]==1&&arr[i+x]==1){
                flag = 1;
                an = i;
                s = i+x;
            }
        }
    }
    if(flag) cout<<"YES\n"<<an<<' '<<s;
    else cout<<"NO\n";
}