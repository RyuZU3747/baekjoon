#include <bits/stdc++.h>
#include <algorithm>
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
    int n;
    cin>>n;
    cout<<"int a;\n";
    for(int i=0;i<n;i++){
        cout<<"int ";
        for(int j=0;j<=i;j++) cout<<"*";
        if(i==0)cout<<"ptr"<<" = &a;\n";
        else if(i==1) cout<<"ptr"<<i+1<<" = &ptr"<<";\n";
        else{
            cout<<"ptr"<<i+1<<" = &ptr"<<i<<";\n";
        }
    }
}