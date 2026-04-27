#include <bits/stdc++.h>
#define FASTIO cin.tie(0), ios_base::sync_with_stdio(0)
#define ll long long int
using namespace std;

int mas[1001][1001];

int main(){
    FASTIO;
    ll n,k;cin>>n>>k;
    ll allmas = n*n;
    ll init = allmas/2;
    if(n%2){
        ll init2 = init+1;
        if(k < init){
            cout<<-1;
            return 0;
        }
        ll a = 0;
        while(abs(k) > init){
            a++;
            k -= allmas;
        }
        if(k%2){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if((i+j)%2==0){
                        if(k>=0){
                            cout<<a+1<<' ';
                            k--;
                        }
                        else{
                            cout<<a-1<<' ';
                            k++;
                        }
                    }
                    else cout<<a<<' ';
                }
                cout<<'\n';
            }
        }
        else{
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    if((i+j)%2==1){
                        if(k>0){
                            cout<<a+1<<' ';
                            k--;
                        }
                        else{
                            cout<<a-1<<' ';
                            k++;
                        }
                    }
                    else cout<<a<<' ';
                }
                cout<<'\n';
            }

        }
    }
    else{
        if(k%2 || k < init){
            cout<<-1;
            return 0;
        }
        k -= init;
        ll a = k/allmas;
        k -= a*allmas;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if((i+j)%2 == 0) cout<<a+1<<' ';
                else{
                    if(k == 0) cout<<a<<' ';
                    else{
                        cout<<a + 2<<' ';
                        k-=2;
                    }
                }
            }
            cout<<'\n';
        }
    }
}