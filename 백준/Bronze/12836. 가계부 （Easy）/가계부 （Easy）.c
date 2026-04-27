#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

long long int tree[4000400], arr[1000100];

long long int maketree(int node, int start, int end){
	if(start==end) return tree[node]=arr[start];
	else return tree[node]=maketree(node*2,start,(start+end)/2)+maketree(node*2+1,(start+end)/2+1,end);
}

long long int prtsum(int node, int start, int end, int left, int right){
	if(left>end||right<start) return 0;
	if(left<=start&&right>=end) return tree[node];
	return prtsum(node*2,start,(start+end)/2,left,right) + prtsum(node*2+1,(start+end)/2+1,end,left,right);
}

void change(int node, int start, int end, int index, long long int diff){
	if(index<start||index>end) return;
	tree[node]+=diff;
	if(start!=end){
		change(node*2,start,(start+end)/2,index, diff);
		change(node*2+1,(start+end)/2+1,end,index,diff);
	}
}

int main(){
	long long int n,a,q1,p,q,x,sel;
	long long int diff;
	scanf("%lld %lld",&n,&q1);
	maketree(1,1,n);
	for(int i=0;i<q1;i++){
		scanf("%lld",&sel);
		if(sel==1){
			scanf("%lld %lld",&p,&x);
			diff = x;
			change(1,1,n,p,diff);
			arr[p]+=diff;
		}
		else{
			scanf("%lld %lld",&p,&q);
			printf("%lld\n",prtsum(1,1,n,p,q));
		}
	}
}