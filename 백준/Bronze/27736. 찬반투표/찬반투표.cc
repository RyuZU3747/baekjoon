#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n;cin>>n;
    int sum = 0;
    int su = 0;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        if(a==0) su++;
        sum += a;
    }
    if(n%2&&su>=n/2+1) cout<<"INVALID";
    else if(!(n%2)&&su>=n/2) cout<<"INVALID";
    else if(sum>0) cout<<"APPROVED";
    else cout<<"REJECTED";
}