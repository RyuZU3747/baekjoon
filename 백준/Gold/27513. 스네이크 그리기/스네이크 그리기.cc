#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    if(n%2==0||m%2==0){
        cout<<n*m<<'\n';
        if(m%2==1){
            for(int i=1;i<=m;i++) cout<<"1 "<<i<<'\n';
            for(int j=0;j<m-3;j+=2){
                for(int i=2;i<=n;i++) cout<<i<<" "<<m-j<<'\n';
                for(int i=n;i>=2;i--)cout<<i<<" "<<m-j-1<<'\n';
            }
            for(int i=2;i<=n;i++) cout<<i<<" 3\n";
            for(int j=0;j<n-1;j+=2){
                cout<<n-j<<" 2\n";
                cout<<n-j<<" 1\n";
                if(n-j-1!=1){
                    
                    cout<<n-j-1<<" 1\n";
                    cout<<n-j-1<<" 2\n";
                }
            }
        }
        else{
            for(int i=1;i<=m;i++) cout<<"1 "<<i<<'\n';
            for(int j=0;j<m;j+=2){
                for(int i=2;i<=n;i++) cout<<i<<" "<<m-j<<'\n';
                for(int i=n;i>=2;i--){
                    if(m-j-1!=0) cout<<i<<" "<<m-j-1<<'\n';
                }
            }
        }        
    }
    else{
        cout<<n*m-1<<'\n';
        for(int i=2;i<=m;i++) cout<<"1 "<<i<<'\n';
        for(int j=0;j<m-3;j+=2){
            for(int i=2;i<=n;i++) cout<<i<<" "<<m-j<<'\n';
            for(int i=n;i>=2;i--)cout<<i<<" "<<m-j-1<<'\n';
        }
        for(int i=2;i<=n;i++) cout<<i<<" 3\n";
        for(int j=0;j<n-1;j+=2){
            cout<<n-j<<" 2\n";
            cout<<n-j<<" 1\n";
            cout<<n-j-1<<" 1\n";
            cout<<n-j-1<<" 2\n";
        }
    }
}