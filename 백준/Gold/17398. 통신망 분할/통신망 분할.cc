#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int root[100010];
ll su[100010];
int chk[100010];
ll ans;
vector<pii> input;
stack<int> st;

int find(int x){
    return root[x] = root[x] == x ? x : find(root[x]);
}

void Union(int x, int y){
    int fx = find(x);
    int fy = find(y);
    if(fx>fy){
        root[fx]=fy;
        su[fy] += su[fx];
        su[fx] = 0;
    }
    else{
        root[fy]=fx;
        su[fx] += su[fy];
        su[fy] = 0;
    }
    return;
}

int main(){
    FASTIO;
    for(int i=0;i<100010;i++){
        root[i]=i;
        su[i] = 1;
    }
    int n,m,q;cin>>n>>m>>q;
    if(n==1){
        cout<<"asdafsdas\n";
    }
    for(int i=0;i<m;i++){
        int a,b;cin>>a>>b;
        input.push_back({a,b});
    }
    for(int i=0;i<q;i++){
        int a;cin>>a;
        chk[a-1] = 1;
        st.push(a-1);
    }
    for(int i=0;i<m;i++){
        if(chk[i]==0){
            int fs = find(input[i].first);
            int se = find(input[i].second);
            if(fs != se) Union(input[i].first,input[i].second);
        }
    }
    while(!st.empty()){
        int cur = st.top();
        st.pop();
        int fs = find(input[cur].first);
        int se = find(input[cur].second);
        if(fs != se){
            ans += (su[fs] * su[se]);
            Union(input[cur].first,input[cur].second);
        }
    }
    cout<<ans;
}