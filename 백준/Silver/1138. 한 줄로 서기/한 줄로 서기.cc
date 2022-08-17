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
    int n;
    cin>>n;
    int ar[11];
    int ans[11];
    for(int i=1;i<=n;i++){
        cin>>ar[i];
    }
    ans[1]=n;
    for(int i=n-1;i>0;i--){
        if(ar[i]==0){
            for(int j=10;j>0;j--){
                ans[j]=ans[j-1];
            }
            ans[1]=i;
        }
        else{
            for(int j=10;j>1+ar[i];j--){
                ans[j]=ans[j-1];
            }
            ans[1+ar[i]]=i;
        }
    } 
    for(int i=1;i<=n;i++) cout<<ans[i]<<' ';
}
