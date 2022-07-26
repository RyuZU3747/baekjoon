#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);

/*------------------------------------------------------------*/

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    int n;
    set<pii> m;
    int left[1000001];
    int right[1000001];
    for(int i=0;i<1000001;i++){
        left[i]=-1;
        right[i]=10000000;
    }
    cin>>n;
    for(int i=0;i<n;i++){
        int l,r;
        cin>>l>>r;
        left[l] = max(left[l],r);
        right[r] = min(right[r],l);
        m.insert(make_pair(l,r));
    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
        int l,r;
        cin>>l>>r;
        if(m.find(make_pair(l,r)) != m.end()){
            cout<<"1\n";
            continue;
        }
        if(left[l]>r&&right[r]<l){cout<<"2\n";continue;}
        cout<<"-1\n";
    }
}