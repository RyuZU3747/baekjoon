#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long

typedef struct treenode{
	int data;
	struct treenode* left;
	struct treenode* right;
} Node;

Node* makeTree(Node* root, int val){
	if(root==NULL){
		Node* root = (Node*)malloc(sizeof(Node));
		root->left = NULL;
		root->right = NULL;
		root->data = val;
		return root;
	}
	else if(root->data>val) root->left = makeTree(root->left,val);
	else if(root->data<val) root->right = makeTree(root->right,val);
	return root;
}

void print(Node* root){
	if(root==NULL) return;
	print(root->left);
	print(root->right);
	printf("%d\n",root->data);
}

int main(){
	int val;
	Node* root = NULL;
	while(scanf("%d",&val)!=EOF){
		root = makeTree(root,val);
	}
	print(root);
}