#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

vector<tuple<string, int, int>> ar;

bool comp(tuple<string,int,int> a, tuple<string,int,int> b){
    int x = get<1>(a);
    int y = get<1>(b);
    return x<y?1:0;
}

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        string a;
        int b,c;
        cin>>a>>b>>c;
        ar.push_back(make_tuple(a,b,c));
    }
    sort(ar.begin(),ar.end(),comp);
    for(auto x: ar){
        string tmp = get<0>(x);
        cout<<(char)toupper(tmp[get<2>(x)-1]);
    }
}