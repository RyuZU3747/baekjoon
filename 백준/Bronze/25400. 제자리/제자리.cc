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

int main(){
    int n,arr[250001];
    cin>>n;
    for(int i=0;i<n;i++) cin>>arr[i];
    int cnt = 0;
    int idx = 1;
    for(int i=0;i<n;i++){
        if(arr[i]==idx){
            cnt++;
            idx++;
            continue;
        }
    }
    cout<<n-cnt;
}