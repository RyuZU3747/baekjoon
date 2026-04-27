#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int n,m;
    cin>>n>>m;
    long long int a,b,c;
    cin>>a>>b>>c;
    long long int sum = a+b+c;
    vector<int> ans;
    ans.push_back(0);
    
    vector<pair<ll, int>> arr(n);
    int t = 1;
    for(auto &x: arr){
        cin>>a>>b>>c;
        x.first = a+b+c;
        x.second = t++;
    }
    int idx = 0;
    sort(arr.begin(), arr.end(), [](pair<ll,int> x, pair<ll,int> y){
        return x.first > y.first;
    });
    while(ans.size() < m && idx<n){
        if(arr[idx].first>sum){
            idx++;
            continue;
        }
        ans.push_back(arr[idx++].second);
    }
    for(auto e: ans) cout<<e<< ' ';                                                              
}