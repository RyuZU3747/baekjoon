#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<ll,ll>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    FASTIO;
    int t;cin>>t;
    cout<<fixed;
    cout.precision(1);
    while(t--){
        int n,k;cin>>n>>k;
        vector<pii> p(10001);
        for(int i=0;i<n;i++){
            cin>>p[i].first>>p[i].second;
        }
        sort(p.begin(),p.begin()+n);
        double left = 0;
        double right = 1000000001;
        double mid;
        while(0.001<right-left){//오차
            mid = (right+left)/2;
            int cnt = 1;
            ll ny=1234567890,xy=-1234567890;
            for(int i=0;i<n;i++){
                ny = min(ny,p[i].second);
                xy = max(xy,p[i].second);

                if(2*mid<(xy-ny)){
                    ny = p[i].second;
                    xy = p[i].second;
                    cnt++;
                }
            }
            if(cnt>k){//늘림
                left = mid;
            }
            else{//줄임
                right = mid;
            }
        }
        cout<<mid<<'\n';
    }
}