#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
#define PI 3.1415926535
using namespace std;

int main(){
    FASTIO;
    int n;cin>>n;
    vector<int> hei(n);
    for(int i=0;i<n;i++) cin>>hei[i];
    int left = 1, right = 300001;
    while(left + 1 < right){
        int mid = (left+right) >> 1;
        int ok = 0;
        int cnt = 0;
        for(int i=0;i<n;i++){
            if(hei[i]>=mid) cnt++;
            else cnt = 0;
            if(cnt >= mid) ok = 1;
        }
        if(ok) left = mid;
        else right = mid;
    }
    cout<<left<<'\n';
}