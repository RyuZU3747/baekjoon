#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;


int main(){
    int n;cin>>n;
    vector<pii> arr;
    priority_queue<pii> pq;
    int ans = 0;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        if(a>b) swap(a,b);
        arr.push_back({b,a});
    }
    int len;cin>>len;
    sort(arr.begin(),arr.end());
    int tmp = 0;
    for(auto cur: arr){
        int right = cur.first;
        int left = cur.second;
        if(right - left <= len){
            pq.push({-left,-right});
            tmp++;
        }
        else continue;
        while(!pq.empty()){
            pii mn = pq.top();
            if(right + mn.first > len){
                pq.pop();
                tmp--;
            }
            else break;
        }
        ans = max(ans, tmp);
    }
    cout<<ans;
}
