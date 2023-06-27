#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int> a;
        int sum = 0;
        double avg;
        for(int i=0;i<n;i++){
            int b;cin>>b;
            a.push_back(b);
            sum += b;
        }
        avg = (double)sum/n;
        int cnt=0;
        for(auto e: a){
            if(avg < e) cnt++; 
        }
        cnt*=100;
        double ans = (double)cnt/n;
        ans *= 1000;
        ans = round(ans);
        ans /= 1000;
        cout<<fixed;
        cout.precision(3);
        cout<<ans<<"%\n";
    }
}