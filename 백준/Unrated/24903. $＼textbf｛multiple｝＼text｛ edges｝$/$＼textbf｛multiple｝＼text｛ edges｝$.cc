#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long
#define INF 123456789
using namespace std;

int main(){
	int n,q;
	scanf("%d %d",&n,&q);
	for(int i=0;i<q;i++){
		if(i%2==0) printf("%d\n",n-1);
		else printf("%d\n",n);
	}
}