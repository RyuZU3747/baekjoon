#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
using namespace std;

int main(){
	int n, t;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		if(n==1) printf("E\n");
		else printf("O\n");
	}
}