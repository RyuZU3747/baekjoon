#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int main(){
	int birth[9], n,mx=-1;
	int day[1001][9], ans[9];
	for(int i=0;i<8;i++) scanf(" %1d",&birth[i]);
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int tmp1, tmp2 = 0, tmp3 = 1;
		for(int j=0;j<8;j++) scanf(" %1d",&day[i][j]);
		for(int j=0;j<8;j++){
			tmp1 = birth[j]-day[i][j];
			tmp2 +=  tmp1*tmp1;
			if(j==3||j==5||j==7){
				tmp3 *= tmp2;
				tmp2 = 0;
			}
		}
		if(mx==tmp3){
			int ansy = 0, ansm = 0, ansd = 0, comy = 0, comm = 0, comd = 0;
			for(int j=0;j<3;j++) ansy += ans[j]*(10*(3-j));
			ansy += ans[3];
			ansm = ans[4]*10 + ans[5];
			ansd = ans[6]*10+ans[7];
			for(int j=0;j<3;j++) comy += day[i][j]*(10*(3-j));
			comy += day[i][3];
			comm = day[i][4]*10 + day[i][5];
			comd = day[i][6]*10+day[i][7];
			if(ansy>comy) for(int j=0;j<8;j++) ans[j] = day[i][j];
			else if(ansy==comy){
				if(ansm>comm) for(int j=0;j<8;j++) ans[j] = day[i][j];
				else if(ansm==comm){
					if(ansd>comd) for(int j=0;j<8;j++) ans[j] = day[i][j];
				}
			}
		}
		else if(mx<tmp3){
			for(int j=0;j<8;j++) ans[j] = day[i][j];
			mx=tmp3;
		}
	}
	for(int i=0;i<8;i++) printf("%d",ans[i]);
}