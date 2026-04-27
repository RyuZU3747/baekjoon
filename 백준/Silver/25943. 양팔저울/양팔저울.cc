#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/

int main(){
    int n;cin>>n;
    int arr[10001];
    for(int i=0;i<n;i++) cin>>arr[i];
    int left = arr[0], right = arr[1];
    for(int i=2;i<n;i++){
        if(left==right||left<right) left += arr[i];
        else right += arr[i];
    }
    int dif = abs(right-left);
    int ans = 0;
    while(dif){
        if(dif>=100){
            dif -= 100;ans++;
        }
        else if(dif>=50){
            dif -= 50;ans++;
        }
        else if(dif>=20){
            dif -= 20;ans++;
        }
        else if(dif>=10){
            dif -= 10;ans++;
        }
        else if(dif>=5){
            dif -= 5;ans++;
        }
        else if(dif>=2){
            dif -= 2;ans++;
        }
        else{
            dif -= 1;ans++;
        }
    }
    cout<<ans;
}