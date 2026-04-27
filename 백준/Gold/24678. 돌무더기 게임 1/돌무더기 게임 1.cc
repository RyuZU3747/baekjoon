#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
using namespace std;

int main(){
	int t,x,y,z,a;
	scanf("%d",&t);
	while(t--){
		scanf("%d %d %d",&x,&y,&z);
		
        a=0;
        if(x%2==0) a++;
        if(y%2==0) a++;
        if(z%2==0) a++;
        
		if(a==2||a==3) printf("R\n");
		else printf("B\n");
	}
}