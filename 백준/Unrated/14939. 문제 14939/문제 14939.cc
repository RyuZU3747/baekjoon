#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};
char room[11][11];
int ans = 123456789;
int cnt;

void r1to9(){
	for(int i=1;i<10;i++){
		for(int j=0;j<10;j++){
			
			if(room[i-1][j]=='O'){
				cnt++;
				if(room[i][j]=='O') room[i][j]='#';
				else if(room[i][j]=='#') room[i][j]='O';
				for(int k=0;k<4;k++){
					int x = j+dy[k];
					int y = i+dx[k];
					if(x>=0&&x<10&&y>=0&&y<10){
						if(room[y][x]=='O') room[y][x]='#';
						else if(room[y][x]=='#') room[y][x]='O';
					}
				}
				
				
			}
			
		}
	}
}

int main(){
	char tmp[11][11];
	for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cin>>room[i][j];
			tmp[i][j]=room[i][j];
		}
	}
	for(int _=0;_<1024;_++){
		cnt=0;
		
		for(int i=0;i<10;i++){
			if(_&(1<<i)){
				cnt++;
				if(room[0][i]=='O') room[0][i]='#';
				else if(room[0][i]=='#') room[0][i]='O';
				for(int k=0;k<4;k++){
					int x = i+dy[k];
					int y = 0+dx[k];
					if(x>=0&&x<10&&y>=0&&y<10){
						if(room[y][x]=='O') room[y][x]='#';
						else if(room[y][x]=='#') room[y][x]='O';
					}
				}
			}
			
		}
		r1to9();
		int flag=0;
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				if(room[i][j]=='O'){
					flag=1;
				}
			}
		}
		if(!flag) ans = Min(ans,cnt);
		for(int i=0;i<10;i++) for(int j=0;j<10;j++) room[i][j]=tmp[i][j];
	}
	
	if(ans==123456789) cout<<-1;
	else cout<<ans;
}