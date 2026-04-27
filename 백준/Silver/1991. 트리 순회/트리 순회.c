#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

typedef struct treenode{
	char left;
	char right;
} Node;

Node root[28];

void print1(char nd){
	if(nd=='.') return;
	printf("%c",nd);
	print1(root[nd].left);
	print1(root[nd].right);
}
void print2(char nd){
	if(nd=='.') return;
	print2(root[nd].left);
	printf("%c",nd);
	print2(root[nd].right);
}
void print3(char nd){
	if(nd=='.') return;
	print3(root[nd].left);
	print3(root[nd].right);
	printf("%c",nd);
}

int main(){
	char val[3];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf(" %c %c %c",&val[0],&val[1],&val[2]);
		root[val[0]].left = val[1];
		root[val[0]].right = val[2];
	}
	print1('A');
	printf("\n");
	print2('A');
	printf("\n");
	print3('A');
}