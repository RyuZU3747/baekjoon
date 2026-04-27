#include <stdio.h>
int main(){
	int n, l, k, score=0;
	int p1[101], p2[101],cot=0;
	scanf("%d %d %d",&n,&l,&k);
	for(int i=0;i<n;i++){
		scanf("%d %d",&p1[i],&p2[i]);
	}
	for(int i=0;i<n;i++){
		if(cot>=k){
			break;
		}
		if(p2[i]<=l){
			score+=140;
			p2[i]=100;
			p1[i]=100;
			cot++;
		}
	}
	for(int i=0;i<n;i++){
		if(cot>=k){
			break;
		}
		if(p1[i]<=l){
			score+=100;
			p2[i]=100;
			p1[i]=100;
			cot++;
		}
		
	}
	printf("%d",score);
}