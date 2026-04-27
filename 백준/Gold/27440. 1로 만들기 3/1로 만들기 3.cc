#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll n;
map<ll,int> visited;
queue<pair<ll,ll>> q;
vector<ll> tmp;

int main(){
	cin>>n;
	q.push(make_pair(n,0));
	visited[n]=1;
	while(!q.empty()){
		ll su = q.front().first;
		ll cnt = q.front().second;
		q.pop();
		if(su==1){
			cout<<cnt;
			break;
		}
		if(su%3==0&&visited[su/3]!=1){
			q.push(make_pair(su/3,cnt+1));
			visited[su/3]=1;
		}
		if(su%2==0&&visited[su/2]!=1){
			q.push(make_pair(su/2,cnt+1));
			visited[su/2]=1;
		}
		if(su>0&&visited[su-1]!=1){
			q.push(make_pair(su-1,cnt+1));
			visited[su-1]=1;
		}
	}
}