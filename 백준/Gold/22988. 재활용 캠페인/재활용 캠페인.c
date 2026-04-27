#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

int comp(const void *a,const void *b){
	ll int c = *(ll int*)a;
	ll int d = *(ll int*)b;
	if(c>d) return 1;
	else if(c==d) return 0;
	else return -1;
}


int main(){
	ll int n,x,c[110000];
	scanf("%lld %lld", &n,&x);
	ll int ans=0,cnt=0;
	int p1=0,p2=n-1;
	for(int i=0;i<n;i++){
		scanf("%lld",&c[i]);
	}
	qsort(c,n,sizeof(ll int),comp);
	while(p1<=p2){
		if(c[p2]!=x) break;
		ans+=1;
		p2-=1;
	}
	while(p1<=p2){
		ll int sum = c[p1]+c[p2];
		if(p1==p2){
			cnt+=1;
			break;
		}
		if(sum*2>=x){
			ans++;
			p1++;
			p2--;
		}
		else{
			p1++;
			cnt+=1;
		}
	}
	printf("%lld\n",ans+cnt/3);
}