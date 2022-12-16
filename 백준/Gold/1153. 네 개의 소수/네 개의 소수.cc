#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

set<int> sosu;
bool arr[1000001];

void getsosu(){
    arr[1]=1;
    for(int i=2;i*i<=1000000;i++){
        for(int j=i*i;j<=1000000;j+=i){
            arr[j]=1;
        }
    }
    for(int i=1;i<1000001;i++){
        if(arr[i]==0){
            sosu.insert(i);
        }
    }
    return;
}

int main(){
    int n;cin>>n;
    getsosu();
    if(n<8){
        cout<<-1;
        return 0;
    }
    if(n%2==0){
        n -= 4;
        for(auto x: sosu){
            if(sosu.find(n-x)!=sosu.end()){
                cout<<"2 2 "<<x<<' '<<n-x;
                return 0;
            }
        }
    }
    else{
        n -= 5;
        for(auto x: sosu){
            if(sosu.find(n-x)!=sosu.end()){
                cout<<"2 3 "<<x<<' '<<n-x;
                return 0;
            }
        }
    }
    cout<<-1;
}