#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int n,k = 65537, t;
int arr[100001];
int tree[400004];

void add(int index){
	++index;
	while(index <= k+1){
		++tree[index];
		index += index & -index;
	}
}

void sub(int index){
	++index;
	while(index <= k+1){
		--tree[index];
		index += index & -index;
	}
}

int kth(int x){
	int ret = 0;
	for(int i=log2(400001); i>=0; --i){
		int pivot = 1<<i;
		if(ret + pivot <= k+1 && tree[ret+pivot] < x){
			x -= tree[ret+pivot];
			ret += pivot;
		}
	}
	return ret;
}

int main(){
    FASTIO;
    cin>>n>>t;
    int mid = (t+1)/2;
    vector<int> arr(n);
    ll ans = 0;
    for(auto &x:arr){
        cin>>x;
        x++;
    }
    for(int i=0;i<t;i++) add(arr[i]);
    for(int i=0;i<n-t;i++){
        ans += kth(mid) - 1;
        sub(arr[i]);
        add(arr[i+t]);
    }
    cout<<ans + kth(mid) - 1;
}