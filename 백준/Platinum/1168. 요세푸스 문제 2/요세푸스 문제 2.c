#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}

int tree[8000000], arr[1000020];

int makeTree(int node, int start, int end){
	if(start==end) return tree[node]=1;
	else{
		int a1=makeTree(node*2,start,(start+end)/2);
		int a2=makeTree(node*2+1,(start+end)/2+1,end);
		return tree[node]=a1+a2;
	}
}

int find(int node, int start, int end, int index){
	if(start==end) return start;
	int mid = (start+end)/2;
	if(index<=tree[node*2]) return find(node*2,start,mid,index);
	else return find(node*2+1,mid+1,end,index-tree[node*2]);
}

int kill(int node, int start, int end, int num){
	tree[node]-=1;
	if(start==end) return tree[node]=0;
	int mid = (start+end)/2;
	if(num<=mid) return kill(node*2,start,mid,num);
	else return kill(node*2+1,mid+1,end,num);
}

int main(){
	int n,k,people,index=1;
	scanf("%d %d",&n,&k);
	makeTree(1,1,n);
	printf("<");
	for(int i=0;i<n;i++){
		people=n-i;
		index+=k-1;
		if(index%people==0)index=people;//0번 없애기
		else if(index>people) index%=people;
		int num = find(1,1,n,index);
		printf("%d",num);
		kill(1,1,n,num);
		if(i!=n-1) printf(", ");
	}
	printf(">");
}