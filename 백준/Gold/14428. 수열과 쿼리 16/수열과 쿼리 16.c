#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))

#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

typedef struct Node{
	long long int num;
	long long int ind;
}Node;

long long int arr[1000020];
Node tree[4000080];

Node Min(Node a1, Node a2){
	if(a1.num<a2.num) return a1;
	else if(a1.num==a2.num){
		if(a1.ind<a2.ind) return a1;
	}
	return a2;
}

Node makeTree(ll int node,ll int start,ll int end){
	if(start==end){
		tree[node].num = arr[start];
		tree[node].ind = start;
		return tree[node];
	}
	else{
		Node a1=makeTree(node*2,start,(start+end)/2);
		Node a2=makeTree(node*2+1,(start+end)/2+1,end);
		return tree[node]=Min(a1,a2);
	}
}

Node change(ll int node,ll int start,ll int end,ll int index, long long int diff){
	if(index<start||index>end) return tree[node];
	if(start==end){
		tree[node].num = diff;
		tree[node].ind = index;
		return tree[node];
	}
	if(start!=end){
		return tree[node]=Min(
		change(node*2,start,(start+end)/2,index,diff),//왼
		change(node*2+1,(start+end)/2+1,end,index,diff));//오른
	}
}

Node min(ll int node,ll int start,ll int end,ll int left,ll int right){
	Node tmp;
	tmp.num = 1234567890;
	tmp.ind = 1234567890;
	if(end<left||start>right) return tmp;
	if(left<=start&&end<=right) return tree[node];
	Node a1 = min(node*2,start,(start+end)/2,left,right);
	Node a2 = min(node*2+1,(start+end)/2+1,end,left,right);
	return Min(a1,a2);
}

int main(){
	long long int n,m,k,a,b,c,sel;
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&arr[i]);
	}
	scanf("%lld",&m);
	makeTree(1,1,n);
	for(long long int i=0;i<m;i++){
		scanf("%lld",&sel);
		if(sel==1){
			scanf("%lld %lld",&a,&b);
			change(1,1,n,a,b);
		}
		else{
			scanf("%lld %lld",&a,&b);
			printf("%lld\n",min(1,1,n,a,b).ind);
		}
	}
}