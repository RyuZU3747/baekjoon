#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
using namespace std;


int main(){
	int n, i=2;
	scanf("%d",&n);
	if(n==1) return 0;
	while(n>1){
		if(i*i>n) break;
		if(n%i==0){
			n=n/i;
			printf("%d\n",i);
		}
		else i++;
	}
	printf("%d",n);
}