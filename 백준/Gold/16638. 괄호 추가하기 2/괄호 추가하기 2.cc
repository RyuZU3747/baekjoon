#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int n;
string s;
vector<pair<char, int>> origin;
vector<pair<char, int>> newform;
ll ans = -1234567890;

ll calc(){
    vector<pair<char, int>> post;
    vector<pair<char, int>> stk;
    for(auto e:newform){
        if(e.second==0) post.push_back({e.first, e.second});
        else{
            while(stk.size() > 0 && stk.back().second >= e.second){
                post.push_back(stk.back());
                stk.pop_back();
            }
            stk.push_back(e);
        }
    }
    while(!stk.empty()){
        post.push_back(stk.back());
        stk.pop_back();
    }
    vector<ll> calcstk;
    for(auto e:post){
        if(e.second==0) calcstk.push_back(e.first - '0');
        else{
            int a = calcstk.back();
            calcstk.pop_back();
            int b = calcstk.back();
            calcstk.pop_back();
            if(e.first=='*') calcstk.push_back(a*b);
            else if(e.first=='+') calcstk.push_back(a+b);
            else calcstk.push_back(b-a);
        }
    }
    return calcstk.back();
}

void backtrac(int idx){
    if(idx==n){
        ans = max(ans, calc());
        return;
    }
    if(origin[idx].second == 0){
        newform.push_back({origin[idx].first, origin[idx].second});
        backtrac(idx+1);
        newform.pop_back();
    }
    else{
        if(idx>2 && newform[idx-2].second == 3){
            newform.push_back({origin[idx].first, origin[idx].second});
            backtrac(idx+1);
            newform.pop_back();
        }
        else{
            newform.push_back({origin[idx].first, origin[idx].second});
            backtrac(idx+1);
            newform.pop_back();
            newform.push_back({origin[idx].first, 3});
            backtrac(idx+1);
            newform.pop_back();
        }
    }
}

int main(){
    FASTIO;
    cin>>n;
    cin>>s;
    for(int i=0;i<n;i++){
        if(i%2){
            if(s[i]=='*') origin.push_back({s[i],2});
            else origin.push_back({s[i],1});
        }
        else origin.push_back({s[i],0});
    }
    backtrac(0);
    cout<<ans;
}