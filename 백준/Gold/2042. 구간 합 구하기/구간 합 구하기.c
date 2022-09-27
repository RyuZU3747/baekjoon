#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

long long int tree[8000000], arr[1000020];

long long int makeTree(int node, int start, int end){
	if(start==end){
		return tree[node]=arr[start];
	}
	else{
		return tree[node]=makeTree(node*2,start,(start+end)/2)+makeTree(node*2+1,(start+end)/2+1,end);
	}
}

void change(int node, int start, int end, int index, long long int diff){
	if(index<start||index>end) return;
	tree[node]+=diff;
	if(start!=end){
		change(node*2,start,(start+end)/2,index,diff);//왼
		change(node*2+1,(start+end)/2+1,end,index,diff);//오른
	}
}

long long sum(int node, int start, int end, int left, int right){
	if(end<left||start>right) return 0;
	if(left<=start&&end<=right) return tree[node];
	return sum(node*2,start,(start+end)/2,left,right)+sum(node*2+1,(start+end)/2+1,end,left,right);
}

int main(){
	long long int n,m,k,a,b,c;
	scanf("%lld %lld %lld",&n,&m,&k);
	for(int i=1;i<=n;i++){
		scanf("%lld",&arr[i]);
	}
	makeTree(1,1,n);
	for(int i=0;i<m+k;i++){
		scanf("%lld %lld %lld",&a,&b,&c);
		if(a==1){
			change(1,1,n,b,c-arr[b]);
			arr[b]=c;
		}
		else if(a==2){
			printf("%lld\n",sum(1,1,n,b,c));
		}
	}
}