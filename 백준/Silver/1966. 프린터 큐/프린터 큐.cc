#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

struct file{
	int num;
	int pri;
};

int main(){
	int t,n,m;
	scanf("%d",&t);
	while(t--){
		file f[101];
		int ma = -1;
		scanf("%d %d",&n,&m);
		for(int i=0;i<n;i++){
			f[i].num=i;
			scanf("%d",&f[i].pri);
			ma = Max(ma,f[i].pri);
		}
		file tmp;
		int su=0;
		for(int i=0;n>0;i++){
			if(f[0].pri==ma){
				su++;
				if(f[0].num==m){
					printf("%d\n",su);
					break;
				}
				else{
					for(int i=0;i<n;i++){
						f[i]=f[i+1];
					}
					ma=-1;
					n--;
					for(int j=0;j<n;j++) ma = Max(ma,f[j].pri);
				}
			}
			else{
				tmp=f[0];
				for(int i=0;i<n;i++){
					f[i]=f[i+1];
				}
				f[n-1] = tmp;
			}
		}
	}
}