#include <bits/stdc++.h>
#define Max(a,b) ((a)>(b) ? (a):(b))
#define Min(a,b) ((a)<(b) ? (a):(b))
#define swap(a,b) {int c; c=a;a=b;b=c;}
#define ll long long int
#define MOD 1000000007
using namespace std;

char arr[1000001];

int main(){
	int _ =0;
	//while(scanf("%1c",&arr[_]) != EOF) _++;
	scanf("%[^\n]s",arr);
	int cnt=0;
	while(1){
		int len = strlen(arr);
		int sum=0;
		if(len==1){
			cout<<cnt<<'\n';
			if((arr[0]-48)%3==0) cout<<"YES";
			else cout<<"NO";
			return 0;
		}
		for(int i=0;i<len;i++){
			sum += arr[i]-48;
		}
		sprintf(arr,"%d",sum);
		cnt++;
	}
}