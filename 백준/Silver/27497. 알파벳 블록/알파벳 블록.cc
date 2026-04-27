#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

stack<char> fr;
deque<char> rr;
stack<int> whe;

int main(){
    int n;cin>>n;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        if(a==1){
            char t;cin>>t;
            whe.push(1);
            rr.push_back(t);
        }
        else if(a==2){
            char t;cin>>t;
            whe.push(2);
            fr.push(t);
        }
        else{
            if(whe.empty()) continue;
            else if(whe.top()==1){
                whe.pop();
                rr.pop_back();
            }
            else if(whe.top()==2){
                whe.pop();
                fr.pop();
            }
        }
    }
    if(fr.empty()&&rr.empty()) cout<<0;
    else{
        while(!fr.empty()){
            cout<<fr.top();
            fr.pop();
        }
        while(!rr.empty()){
            cout<<rr.front();
            rr.pop_front();
        }
    }
}