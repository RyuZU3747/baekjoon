#include <stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	for(int i=a;i>=2;i--){
		if(i==2){
			printf("%d bottles of beer on the wall, %d bottles of beer.\n",i,i);
			printf("Take one down and pass it around, 1 bottle of beer on the wall.\n");
		}
		else{
			printf("%d bottles of beer on the wall, %d bottles of beer.\n",i,i);
			printf("Take one down and pass it around, %d bottles of beer on the wall.\n",i-1);
		}
		printf("\n");
	}
	printf("1 bottle of beer on the wall, 1 bottle of beer.\n");
	printf("Take one down and pass it around, no more bottles of beer on the wall.\n\n");
	printf("No more bottles of beer on the wall, no more bottles of beer.\n");
	if(a!=1)printf("Go to the store and buy some more, %d bottles of beer on the wall.",a);
	else printf("Go to the store and buy some more, %d bottle of beer on the wall.");
}