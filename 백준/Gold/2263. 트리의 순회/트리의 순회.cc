#include <bits/stdc++.h>
using namespace std;

int in[100001];
int post[100001];
int ind[100001];
int n;

void maketree(int inst, int inen, int posst, int posen){
	if(inst>inen||posst>posen) return;
	int i=ind[post[posen]];
	printf("%d ",post[posen]);
	maketree(inst,i-1,posst,posst+i-inst-1);
	maketree(i+1,inen,posst+i-inst,posen-1);
}

int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&in[i]);
		ind[in[i]]=i;
	}
	for(int i=0;i<n;i++){
		scanf("%d",&post[i]);
	}
	maketree(0,n-1,0,n-1);
}