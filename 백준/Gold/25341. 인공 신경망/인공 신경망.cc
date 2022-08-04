#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
using namespace std;

struct elem{
    vector<int> input;
    vector<int> weight;
    int bias;
};

ll n,m,q;
elem e[2001];
elem output;

vector<int> inp;
int com[2001];

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    cin>>n>>m>>q;
    for(int i=0;i<m;i++){
        int c;
        cin>>c;
        for(int j=0;j<c;j++){
            int tmp;
            cin>>tmp;
            e[i].input.push_back(tmp);
            inp.push_back(tmp);
        }
        for(int j=0;j<c;j++){
            int tmp;
            cin>>tmp;
            e[i].weight.push_back(tmp);
        }
        cin>>e[i].bias;
    }
    for(int i=0;i<m;i++){
        int tmp;
        cin>>tmp;
        output.weight.push_back(tmp);
    }
    cin>>output.bias;
    //전처리
    int add = 0;
    for(int i=0;i<m;i++){
        for(int j=0;j<e[i].input.size();j++){
            com[e[i].input[j]-1] += e[i].weight[j]*output.weight[i];
        }
        add += e[i].bias*output.weight[i];
    }

    for(int i=0;i<q;i++){
        int q[2001];
        ll ans=0;
        for(int j=0;j<n;j++){
            cin>>q[j];
        }
        for(int j=0;j<n;j++){
            ans += (q[j] * com[j]);
        }
        ans += add;
        ans += output.bias;
        cout<<ans<<'\n';
    }
}