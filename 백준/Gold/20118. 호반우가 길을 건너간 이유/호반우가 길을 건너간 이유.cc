#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000003
#define pii pair<int, int>
#define pll pair<ll, ll>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int n,m;cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int a;cin>>a;
        }
    }
    if(n==m && n%2==0){
        cout<<n*2<<'\n';
        for(int i=0;i<n;i+=2){
            cout<<i<<' '<<i<<'\n';
            cout<<i+1<<' '<<i+1<<'\n';
            cout<<i<<' '<<i<<'\n';
            cout<<i+1<<' '<<i+1<<'\n';
        }
    }
    else if(n==m){
        cout<<(n-1)*2+4<<'\n';
        for(int i=0;i<n-1;i+=2){
            cout<<i<<' '<<i<<'\n';
            cout<<i+1<<' '<<i+1<<'\n';
            cout<<i<<' '<<i<<'\n';
            cout<<i+1<<' '<<i+1<<'\n';
        }
        cout<<n-2<<' '<<n-1<<'\n';
        cout<<n-1<<' '<<n-1<<'\n';
        cout<<n-2<<' '<<n-1<<'\n';
        cout<<n-1<<' '<<n-1<<'\n';
    }
    else{
        int mn = min(n,m);
        int dif = abs(n-m);
        if(mn%2){
            if(dif%2){
                cout<<mn*2+dif*2<<'\n';
                for(int i=0;i<mn-1;i+=2){
                    cout<<i<<' '<<i<<'\n';
                    cout<<i+1<<' '<<i+1<<'\n';
                    cout<<i<<' '<<i<<'\n';
                    cout<<i+1<<' '<<i+1<<'\n';
                }
                if(mn==n){
                    for(int i=n-1;i<m;i+=2){
                        cout<<n-1<<' '<<i<<'\n';
                        cout<<n-1<<' '<<i+1<<'\n';
                        cout<<n-1<<' '<<i<<'\n';
                        cout<<n-1<<' '<<i+1<<'\n';
                    }
                }
                else{
                    for(int i=m-1;i<n;i+=2){
                        cout<<i<<' '<<m-1<<'\n';
                        cout<<i+1<<' '<<m-1<<'\n';
                        cout<<i<<' '<<m-1<<'\n';
                        cout<<i+1<<' '<<m-1<<'\n';
                    }
                }
            }
            else{
                cout<<(mn-1)*2+dif*2 + 4<<'\n';
                for(int i=0;i<mn-1;i+=2){
                    cout<<i<<' '<<i<<'\n';
                    cout<<i+1<<' '<<i+1<<'\n';
                    cout<<i<<' '<<i<<'\n';
                    cout<<i+1<<' '<<i+1<<'\n';
                }
                if(mn==n){
                    for(int i=n-2;i<m;i+=2){
                        cout<<n-1<<' '<<i<<'\n';
                        cout<<n-1<<' '<<i+1<<'\n';
                        cout<<n-1<<' '<<i<<'\n';
                        cout<<n-1<<' '<<i+1<<'\n';
                    }
                }
                else{
                    for(int i=m-2;i<n;i+=2){
                        cout<<i<<' '<<m-1<<'\n';
                        cout<<i+1<<' '<<m-1<<'\n';
                        cout<<i<<' '<<m-1<<'\n';
                        cout<<i+1<<' '<<m-1<<'\n';
                    }
                }
            }
        }
        else{
            if(dif%2){
                cout<<mn*2+(dif-1)*2+4<<'\n';
                for(int i=0;i<mn-1;i+=2){
                    cout<<i<<' '<<i<<'\n';
                    cout<<i+1<<' '<<i+1<<'\n';
                    cout<<i<<' '<<i<<'\n';
                    cout<<i+1<<' '<<i+1<<'\n';
                }
                if(mn==n){
                    cout<<n-2<<' '<<n-1<<'\n';
                    cout<<n-1<<' '<<n<<'\n';
                    cout<<n-2<<' '<<n-1<<'\n';
                    cout<<n-1<<' '<<n<<'\n';
                    for(int i=n+1;i<m;i+=2){
                        cout<<n-1<<' '<<i<<'\n';
                        cout<<n-1<<' '<<i+1<<'\n';
                        cout<<n-1<<' '<<i<<'\n';
                        cout<<n-1<<' '<<i+1<<'\n';
                    }
                }
                else{
                    cout<<m-1<<' '<<m-2<<'\n';
                    cout<<m<<' '<<m-1<<'\n';
                    cout<<m-1<<' '<<m-2<<'\n';
                    cout<<m<<' '<<m-1<<'\n';
                    for(int i=m+1;i<n;i+=2){
                        cout<<i<<' '<<m-1<<'\n';
                        cout<<i+1<<' '<<m-1<<'\n';
                        cout<<i<<' '<<m-1<<'\n';
                        cout<<i+1<<' '<<m-1<<'\n';
                    }
                }
            }
            else{
                cout<<max(n,m)*2<<'\n';
                for(int i=0;i<mn;i+=2){
                    cout<<i<<' '<<i<<'\n';
                    cout<<i+1<<' '<<i+1<<'\n';
                    cout<<i<<' '<<i<<'\n';
                    cout<<i+1<<' '<<i+1<<'\n';
                }
                if(mn==n){
                    for(int i=n;i<m;i+=2){
                        cout<<n-1<<' '<<i<<'\n';
                        cout<<n-1<<' '<<i+1<<'\n';
                        cout<<n-1<<' '<<i<<'\n';
                        cout<<n-1<<' '<<i+1<<'\n';
                    }
                }
                else{
                    for(int i=m;i<n;i+=2){
                        cout<<i<<' '<<m-1<<'\n';
                        cout<<i+1<<' '<<m-1<<'\n';
                        cout<<i<<' '<<m-1<<'\n';
                        cout<<i+1<<' '<<m-1<<'\n';
                    }
                }
            }
        }
    }
}