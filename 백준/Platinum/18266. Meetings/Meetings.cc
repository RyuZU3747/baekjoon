#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main(){
    int n,l;cin>>n>>l;
    vector<array<int,3>> cow(n);
    int totalw = 0;
    for(int i=0;i<n;i++){
        cin>>cow[i][0]>>cow[i][1]>>cow[i][2];
        totalw += cow[i][0];
    }
    sort(cow.begin(), cow.end(), [](array<int,3> a, array<int,3> b){return a[1] < b[1];});
    
    vector<pii> le;
    vector<pii> ri;
    for(int i=0;i<n;i++){
        if(cow[i][2] == -1){
            le.push_back({cow[i][1],cow[i][0]});
        }
        else{
            ri.push_back({cow[i][1],cow[i][0]});
        }
    }
    vector<pii> dis;
    for(int i=0;i<le.size();i++) dis.push_back({le[i].first, cow[i][0]});
    for(int i=0;i<ri.size();i++) dis.push_back({l-ri[i].first, cow[i+le.size()][0]});
    sort(dis.begin(), dis.end());
    int sumw = 0;
    int time = 0;
    for(auto e: dis){
        sumw += e.second;
        time = e.first;
        if(totalw <= sumw*2) break;
    }

    ll ans = 0;
    queue<int> q;
    for(int i=0;i<n;i++){
        if(cow[i][2] == -1){
            while(!q.empty() && q.front() + 2*time < cow[i][1]) q.pop();
            ans += q.size();
        }
        else q.push(cow[i][1]);
    }
    cout<<ans;
}