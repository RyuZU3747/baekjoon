#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

string mp[2001];
int n;
int presum[2001][2001];
int pre1sum[2001][2001];

int szcheck(int sz, int sr, int sc, int mr, int mc, int er, int ec){
    if(sr<0||sc<0||er>n||ec>n||sz<3) return 0;
    int onesu = (sz/2)*4+1;
	int one = pre1sum[er][ec] - pre1sum[er][sc-1] - pre1sum[sr-1][ec] + pre1sum[sr-1][sc-1];
	if(one != onesu) return 0;
    return 1;
}

int main(){
    FASTIO;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>mp[i];
    }
    if(mp[0][0]=='1') pre1sum[1][1] = 1;
    for(int i=2;i<=n;i++){
        pre1sum[1][i] = pre1sum[1][i-1] + (mp[0][i-1]=='1');
        pre1sum[i][1] = pre1sum[i-1][1] + (mp[0][i-1]=='1');
    }
    for(int i=2;i<=n;i++){
        for(int j=2;j<=n;j++){
            pre1sum[i][j] = pre1sum[i-1][j] + pre1sum[i][j-1] - pre1sum[i-1][j-1] + (mp[i-1][j-1]=='1');
        }
    }
    int ans = 0;
    for(int i=1;i<n;i++){
        for(int j=1;j<n;j++){
			if(mp[i][j]=='0'||mp[i-1][j]=='0'||mp[i+1][j]=='0'||mp[i][j-1]=='0'||mp[i][j-1]=='0') continue;
			int sz = 1;
			int onesu = 5;
			int one = pre1sum[i+sz+1][j+sz+1] - pre1sum[i-sz][j+sz+1] - pre1sum[i+sz+1][j-sz] + pre1sum[i-sz][j-sz];
			while(one==onesu){
				ans++;
				onesu += 4;
				sz++;
				one = pre1sum[i+sz+1][j+sz+1] - pre1sum[i-sz][j+sz+1] - pre1sum[i+sz+1][j-sz] + pre1sum[i-sz][j-sz];
			}
        }
    }
    cout<<ans;
}