#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);

/*------------------------------------------------------------*/

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
    int t;
    cin>>t;
    getsosu();
    while(t--){
        int a;
        cin>>a;
        int cnt = 0;
        for(auto x: sosu){
            if(x*2>a) break;
            if(sosu.find(a-x)!=sosu.end()){
                cnt++;
            }
        }
        cout<<cnt<<'\n';
    }
}