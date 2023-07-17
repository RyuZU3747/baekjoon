#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
#define PI 3.1415926535
using namespace std;

ll wi[100010];
ll he[100010];
pair<ll,ll> house[100010];

int main(){
    FASTIO;
    ll w,h;cin>>w>>h;
    int n;cin>>n;
    ll wsum = 0, hsum = 0;
    for(int i=0;i<n;i++){
        cin>>wi[i]>>he[i];
        wsum += wi[i];
        hsum += he[i];
        house[i] = {wi[i],he[i]};
    }
    sort(wi, wi+n);
    sort(he, he+n);
    if(n%2){
        ll mx = 0;
        int r = he[n/2];
        int c = wi[n/2];
        ll ans = 0;
        for(int i=0;i<n;i++){
            mx = max(mx, abs(house[i].second-r)+abs(house[i].first-c));
            ans += abs(he[i]-r)*2;
            ans += abs(wi[i]-c)*2;
        }
        cout<<ans-mx<<'\n'<<c<<' '<<r;
    }
    else{
        ll mx1 = 0;
        ll r1 = he[n/2-1];
        ll c1 = wi[n/2-1];
        ll r2 = he[n/2];
        ll c2 = wi[n/2];
        ll ar, ac;
        ll ans1 = 0;
        ll ans2 = 0;
        ll ans3 = 0;
        ll ans4 = 0;
        ll ans = 1234567890123456789;
        for(int i=0;i<n;i++){
            mx1 = max(mx1, abs(house[i].second-r1)+abs(house[i].first-c1));
            ans1 += abs(he[i]-r1)*2;
            ans1 += abs(wi[i]-c1)*2;
        }
        ans1 -= mx1;
        if(ans > ans1){
            ar = r1, ac = c1;
            ans = ans1;
        }
        mx1 = 0;
        for(int i=0;i<n;i++){
            mx1 = max(mx1, abs(house[i].second-r2)+abs(house[i].first-c1));
            ans2 += abs(he[i]-r2)*2;
            ans2 += abs(wi[i]-c1)*2;
        }
        ans2 -= mx1;
        if(ans > ans2){
            ar = r2, ac = c1;
            ans = ans2;
        }
        mx1 = 0;
        for(int i=0;i<n;i++){
            mx1 = max(mx1, abs(house[i].second-r1)+abs(house[i].first-c2));
            ans3 += abs(he[i]-r1)*2;
            ans3 += abs(wi[i]-c2)*2;
        }
        ans3 -= mx1;
        if(ans > ans3){
            ar = r1, ac = c2;
            ans = ans3;
        }
        mx1 = 0;
        for(int i=0;i<n;i++){
            mx1 = max(mx1, abs(house[i].second-r2)+abs(house[i].first-c2));
            ans4 += abs(he[i]-r2)*2;
            ans4 += abs(wi[i]-c2)*2;
        }
        ans4 -= mx1;
        if(ans > ans4){
            ar = r2, ac = c2;
            ans = ans4;
        }
        cout<<ans<<'\n'<<ac<<' '<<ar;
    }
}