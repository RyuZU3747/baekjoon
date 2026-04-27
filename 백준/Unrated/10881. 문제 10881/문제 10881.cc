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
    int _;cin>>_;
    while(_--){
        vector<pii> box;
        for(int i=0;i<3;i++){
            int a,b;cin>>a>>b;
            box.push_back({a,b});
            box.push_back({b,a});
        }
        int ans = 1234567890;
        for(int i=0;i<6;i++){
            for(int j=0;j<6;j++){
                for(int k=0;k<6;k++){
                    if(i/2==j/2||j/2==k/2||k/2==i/2) continue;
                    int w1 = box[i].first + box[j].first + box[k].first;
                    int h1 = max(box[i].second, max(box[j].second, box[k].second));
                    int w2 = max(box[i].first + box[j].first, box[k].first);
                    int h2 = max(box[i].second, box[j].second) + box[k].second;
                    ans = min(ans, min(w1*h1,w2*h2));

                }
            }
        }
        cout<<ans<<'\n';
    }
}