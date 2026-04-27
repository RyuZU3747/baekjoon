#include <bits/stdc++.h>

using namespace std;

int comp(pair<char,int> a, pair<char,int> b){
    int tmp[2];
        if(a.first=='B') tmp[0]=1;
        if(a.first=='S') tmp[0]=2;
        if(a.first=='G') tmp[0]=3;
        if(a.first=='P') tmp[0]=4;
        if(a.first=='D') tmp[0]=5;
        if(b.first=='B') tmp[1]=1;
        if(b.first=='S') tmp[1]=2;
        if(b.first=='G') tmp[1]=3;
        if(b.first=='P') tmp[1]=4;
        if(b.first=='D') tmp[1]=5;
    if(tmp[0]>tmp[1]) return 0;
    else if(tmp[0]<tmp[1]) return 1;
    else{
        if(a.second<b.second) return 0;
        else if(a.second>b.second) return -1;
        else return 0;
    }
} 

int main(){
    int n;
    cin>>n;
    vector<pair<char,int>> ar;
    vector<pair<char,int>> so;
    for(int i=0;i<n;i++){
        char a; int b;
        cin>>a>>b;
        so.push_back(make_pair(a,b));
        ar.push_back(make_pair(a,b));
    }
    sort(so.begin(),so.end(),comp);
    pair<char,int> ans[2];
    int idx = 0;
    for(int i=0;i<n;i++){
        if(so[i].first!=ar[i].first||so[i].second!=ar[i].second){
            ans[idx].first = so[i].first;
            ans[idx].second = so[i].second;
            idx++;
        }
    }
    if(idx==0){
        cout<<"OK";
    }
    else{
        cout<<"KO"<<'\n';
        cout<<ans[0].first<<ans[0].second<<' '<<ans[1].first<<ans[1].second;
    }
}