#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
using namespace std;

int p[400001];

int main(){
	int n;
	for(int i=0;i<250000;i++) p[i]=i;
	for(int i=2;i<250000;i++){
		if(p[i]==0) continue;
		for(int j=2*i;j<=250000;j+=i){
			p[j]=0;
		}
	}
	p[1]=0;
	while(1){
		int cnt=0;
		scanf("%d",&n);
		if(n==0) break;
		for(int i=n+1;i<=2*n;i++){
			if(p[i]!=0){
				cnt++;
			}
		}
		printf("%d\n",cnt);
	}
}