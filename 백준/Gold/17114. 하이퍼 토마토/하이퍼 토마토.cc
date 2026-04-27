#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

ll day,ans;
int a,b,c,d,e,f,g,h,i,j,k;

queue<tuple<int,int,int,int,int,int,int,int,int,int,int,int>> q;

int dm[22] = {1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int dn[22] = {0,0,1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int dO[22] = {0,0,0,0,1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int dp[22] = {0,0,0,0,0,0,1,-1,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int dq[22] = {0,0,0,0,0,0,0,0,1,-1,0,0,0,0,0,0,0,0,0,0,0,0};
int dr[22] = {0,0,0,0,0,0,0,0,0,0,1,-1,0,0,0,0,0,0,0,0,0,0};
int ds[22] = {0,0,0,0,0,0,0,0,0,0,0,0,1,-1,0,0,0,0,0,0,0,0};
int dt[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,-1,0,0,0,0,0,0};
int du[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,-1,0,0,0,0};
int dv[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,-1,0,0};
int dw[22] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,-1};

int main(){
	FASTIO;
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k;
	int mato[a][b][c][d][e][f][g][h][i][j][k];
	int visited[a][b][c][d][e][f][g][h][i][j][k];
	for(int k1=0;k1<k;k1++){
		for(int j1=0;j1<j;j1++){
			for(int i1=0;i1<i;i1++){
				for(int h1=0;h1<h;h1++){
					for(int g1=0;g1<g;g1++){
						for(int f1=0;f1<f;f1++){
							for(int e1=0;e1<e;e1++){
								for(int d1=0;d1<d;d1++){
									for(int c1=0;c1<c;c1++){
										for(int b1=0;b1<b;b1++){
											for(int a1=0;a1<a;a1++){
												cin>>mato[a1][b1][c1][d1][e1][f1][g1][h1][i1][j1][k1];
												visited[a1][b1][c1][d1][e1][f1][g1][h1][i1][j1][k1] = 0;
												if(mato[a1][b1][c1][d1][e1][f1][g1][h1][i1][j1][k1]==1){
													q.push({a1,b1,c1,d1,e1,f1,g1,h1,i1,j1,k1,0});
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

	while(!q.empty()){
		int M=get<0>(q.front());
		int N=get<1>(q.front());
		int O=get<2>(q.front());
		int P=get<3>(q.front());
		int Q=get<4>(q.front());
		int R=get<5>(q.front());
		int S=get<6>(q.front());
		int T=get<7>(q.front());
		int U=get<8>(q.front());
		int V=get<9>(q.front());
		int W=get<10>(q.front());
		day=get<11>(q.front());
		q.pop();
		ans = max(ans,day);
		for(int idx=0;idx<22;idx++){
			int nm = M+dm[idx];
			int nn = N+dn[idx];
			int no = O+dO[idx];
			int np = P+dp[idx];
			int nq = Q+dq[idx];
			int nr = R+dr[idx];
			int ns = S+ds[idx];
			int nt = T+dt[idx];
			int nu = U+du[idx];
			int nv = V+dv[idx];
			int nw = W+dw[idx];
			if(nm>=0&&nm<a
			&&nn>=0&&nn<b
			&&no>=0&&no<c
			&&np>=0&&np<d
			&&nq>=0&&nq<e
			&&nr>=0&&nr<f
			&&ns>=0&&ns<g
			&&nt>=0&&nt<h
			&&nu>=0&&nu<i
			&&nv>=0&&nv<j
			&&nw>=0&&nw<k){
				if(visited[nm][nn][no][np][nq][nr][ns][nt][nu][nv][nw]==1) continue;
				if(mato[nm][nn][no][np][nq][nr][ns][nt][nu][nv][nw]==0){
					q.push({nm,nn,no,np,nq,nr,ns,nt,nu,nv,nw,day+1});
					mato[nm][nn][no][np][nq][nr][ns][nt][nu][nv][nw]=1;
					visited[nm][nn][no][np][nq][nr][ns][nt][nu][nv][nw]=1;
				}
			}
		}
	}

	for(int k1=0;k1<k;k1++){
		for(int j1=0;j1<j;j1++){
			for(int i1=0;i1<i;i1++){
				for(int h1=0;h1<h;h1++){
					for(int g1=0;g1<g;g1++){
						for(int f1=0;f1<f;f1++){
							for(int e1=0;e1<e;e1++){
								for(int d1=0;d1<d;d1++){
									for(int c1=0;c1<c;c1++){
										for(int b1=0;b1<b;b1++){
											for(int a1=0;a1<a;a1++){
												if(mato[a1][b1][c1][d1][e1][f1][g1][h1][i1][j1][k1]==0){
													cout<<-1;
													return 0;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
	cout<<ans;
}