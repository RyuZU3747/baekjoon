#include <bits/stdc++.h>
using namespace std;

int main(){
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int n;
	cin >> n;
	cout << fixed;
	cout.precision(6);

	double p[305] = {0.0, 1.0, 1.0/(double) (n-1), };

	for(int i = 3; i <= n; i++){
		double cur = p[1]/(double) (n-1);
		for (int j = 2; j < i; j++){
			cur += p[j]/(double) (n+1-j);
			
		}
		p[i]=cur;
	}

	cout << p[n];
}