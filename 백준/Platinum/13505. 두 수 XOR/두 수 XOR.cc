#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int arr[100001], n;

int max_xor(){
    int maxx = 0, mask = 0;
    set<int> se;
    for (int i = 30; i >= 0; i--) {
        // set the i'th bit in mask
        // like 100000, 110000, 111000..
        mask |= (1 << i);
        for (int i = 0; i < n; ++i) {
 
            // Just keep the prefix till
            // i'th bit neglecting all
            // the bit's after i'th bit
            se.insert(arr[i] & mask);
        }
        int newMaxx = maxx | (1 << i);
        for (int prefix : se) {
 
            // find two pair in set
            // such that a^b = newMaxx
            // which is the highest
            // possible bit can be obtained
            if (se.count(newMaxx ^ prefix)) {
                maxx = newMaxx;
                break;
            }
        }
        // clear the set for next
        // iteration
        se.clear();
    }
    return maxx;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<max_xor();
}