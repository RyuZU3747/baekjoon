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
		long long int a1=makeTree(node*2,start,(start+end)/2);
		long long int a2=makeTree(node*2+1,(start+end)/2+1,end);
		return tree[node]=Min(a1,a2);
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

long long min(int node, int start, int end, int left, int right){
	if(end<left||start>right) return 1000000001;
	if(left<=start&&end<=right) return tree[node];
	long long int a1 = min(node*2,start,(start+end)/2,left,right);
	long long int a2 = min(node*2+1,(start+end)/2+1,end,left,right);
	return Min(a1,a2);
}

int main(){
	long long int n,m,k,a,b,c;
	scanf("%lld %lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&arr[i]);
	}
	makeTree(1,1,n);
	for(int i=0;i<m;i++){
		scanf("%lld %lld",&a,&b);
		printf("%lld\n",min(1,1,n,a,b));
	}
}