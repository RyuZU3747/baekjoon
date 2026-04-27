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

vector<int> sosu;
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
         sosu.push_back(i);
      }
   }
   return;
}

int main(){ 
    FASTIO;
    int t;cin>>t;
    getsosu();
    for(int _=1;_<=t;_++){
        int n,m;cin>>n>>m;
        map<int,int> A;
        map<int,int> B;
        for(int i=0;i<n;i++){
            int a;cin>>a;
            for(int j=2;j*j<=a;j++){
                while(a%j==0){
                    A[j]++;
                    a/=j;
                }
            }
            if(a>1) A[a]++;
        }
        for(int i=0;i<m;i++){
            int a;cin>>a;
            for(int j=2;j*j<=a;j++){
                while(a%j==0){
                    B[j]++;
                    a/=j;
                }
            }
            if(a>1) B[a]++;
        }
        for(auto e: sosu){
            if(A.find(e)==A.end() && B.find(e)==B.end()) continue;
            int mn = min(A[e], B[e]);
            A[e] -= mn;
            B[e] -= mn;
        }
        int up = 1;
        int down = 1;
        for(auto e: sosu){
            if(A.find(e)==A.end() && B.find(e)==B.end()) continue;
            if(A[e]!=0) up *= e*A[e];
            if(B[e]!=0) down *= e*B[e];
        }
        cout<<"Case #"<<_<<": "<<up<<" / "<<down<<'\n';
    }    
}