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
        int n,b;cin>>n>>b;
        map<string, vector<pii>> bu;
        map<string, int> idx;
        for(int i=0;i<n;i++){
            string cat, nam;
            ll pr, qu;cin>>cat>>nam>>pr>>qu;
            bu[cat].push_back({pr,qu});
            idx[cat] = i;
        }
        priority_queue<pii> pq[1001];
        priority_queue<pair<int, pair<int,string>>> compu;
        for(auto e: bu){
            for(auto x: e.second){
                pq[idx[e.first]].push({-x.first,x.second});
            }
        }
        ll ans = 0;
        ll mon = 0;
        for(auto e: idx){
            int price = -pq[e.second].top().first;
            int qual = pq[e.second].top().second;
            string name = e.first;
            pq[e.second].pop();
            mon += price;
            compu.push({-qual,{price,name}});
        }
        while(1){
            ans = -compu.top().first;
            int mnqual = ans;
            int mnprice = compu.top().second.first;
            string mnname = compu.top().second.second;
            compu.pop();
            //cout<<mnname<<' '<<mnqual<<' '<<mnprice<<' '<<mon<<'\n';
            while(pq[idx[mnname]].size()!=0 && pq[idx[mnname]].top().second <= mnqual) pq[idx[mnname]].pop();
            if(pq[idx[mnname]].size()==0) break;
            else{
                mon -= mnprice;
                mon -= pq[idx[mnname]].top().first;
                if(mon > b) break;
                compu.push({-pq[idx[mnname]].top().second,{-pq[idx[mnname]].top().first, mnname}});
                pq[idx[mnname]].pop();
            }
        }
        cout<<ans<<'\n';
    }
}