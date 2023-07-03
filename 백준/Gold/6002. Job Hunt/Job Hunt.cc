#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int dist[501];
vector<iii> edge;//from to w

int main(){
	int d,p,c,f,s;cin>>d>>p>>c>>f>>s;
	for(int i=0;i<p;i++){
		int a,b;cin>>a>>b;
		edge.push_back({a,b,d});
	}
	for(int i=0;i<f;i++){
		int a,b,x;cin>>a>>b>>x;
		edge.push_back({a,b,d-x});
	}
    for(int i=0;i<501;i++) dist[i] = -1;
    dist[s] = d;
    int flag = 0;
    for(int i=0;i<c;i++){
        for(auto x: edge){
            int from = get<0>(x);
            int to = get<1>(x);
        	int w = get<2>(x);
            if(dist[from] != -1&&dist[to] < dist[from] + w){
                dist[to] = dist[from] + w;
                if(i==c-1) flag = 1;
            }
        }
    }
    if(flag) cout<<-1;
    else{
		int ans = -1;
		for(int i=1;i<=c;i++){
			ans = max(ans, dist[i]);
		}
		cout<<ans;
    }
}