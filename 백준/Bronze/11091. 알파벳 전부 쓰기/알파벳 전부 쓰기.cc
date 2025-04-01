/*
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣀⣤⣤⣴⣶⣾⣾⣿⣿⣿⣿⣿⣷⣶⣦⣤⣄⡀⠀⠀⣴⡄⢸⣯⣤⣴⣦⣤⣦⡀⠀⣠⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⣄⣠⣤⣶⣾⣿⣿⡿⣿⣿⣻⢿⣽⢯⣟⣾⣳⢯⡿⣽⣻⣟⡿⣿⣿⣿⣦⣽⡿⠻⠟⠉⠙⠉⠻⠏⠛⠿⣿⣄⣤⣤⡄⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣼⣿⣿⣿⣿⣿⣿⣷⡿⠿⠿⠿⠿⠿⢿⣿⣾⣳⣯⢿⣽⣳⣟⡾⣽⣳⣿⣿⣿⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⢿⣿⣾⠄⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⣿⠿⠛⠉⠉⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠙⠻⠿⣿⣾⣷⢯⣟⡷⣯⣿⣿⣿⡦⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣿⡷⢶⣆⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣴⡿⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⢿⣿⣽⣳⣯⢿⣿⣧⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣿⣅⡀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⣿⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠘⠻⣿⣿⣿⣿⣿⣧⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⠿⠇⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⢀⣾⡟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣀⡀⠀⠀⠀⠀⠀⠀⠘⣿⣿⣿⠛⠛⠻⢿⣷⣤⣤⣀⣤⣤⣴⣾⣿⡛⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⣰⣿⠋⠀⠀⠀⠀⠀⠀⠀⣼⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢿⣧⡀⠀⠀⠀⠀⠀⢺⣿⣿⠀⠀⠀⠀⠀⠀⢿⣿⣿⣿⣿⣿⣿⣿⣿⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⣴⣿⠁⠀⠀⠀⠀⠀⠀⠀⢸⡿⠁⠀⠀⠀⢰⣤⡄⠀⠀⠀⠀⠀⠀⠀⣽⡿⣿⡀⠀⠀⠀⠘⠛⣻⣿⣤⠀⠀⠀⠀⠀⢸⣿⡿⠛⠉⠀⣠⡿⠟⣻⡷⠀⠀⠀
⠀⠀⠀⠀⣼⡿⠀⠀⠀⢠⣤⠀⠀⠀⠀⣿⠇⠀⠀⠀⠀⢸⣿⣿⠀⠀⠀⠀⠀⠀⠀⣿⡇⢻⣷⠀⠀⠀⠀⠈⠋⣻⣷⣦⣀⣀⣤⣴⣿⣿⣿⣀⣴⡿⠟⠿⣶⣿⡁⠀⠀⠀
⠀⠀⠀⣼⡟⠁⠀⠀⠀⣼⡟⠀⠀⠀⣸⡟⠀⠀⠀⠀⠀⣸⡟⣿⡇⠀⠀⠀⠀⠀⠀⣿⠁⠈⣿⡆⠀⠀⠀⠀⠈⠛⢿⡏⢿⣯⣿⣿⣿⣿⣿⣿⣿⣴⣦⣶⣶⡿⠃⠀⠀⠀
⠀⠀⣼⡿⣡⣦⠀⠀⠀⣿⡇⠀⠀⠀⣾⡇⠀⠀⠀⠀⢠⣿⠁⢿⡧⠀⠀⠀⠀⠀⠀⣿⠂⠀⢸⣷⡀⠀⠀⠀⠀⠀⢸⣯⠀⠀⣿⣿⣿⣿⣿⣟⣿⣿⣿⣿⣿⣿⣷⣶⣤⣄
⠀⢠⣿⣽⣿⡿⠀⠀⠀⣿⠇⠀⠀⠀⣿⠇⠀⠀⠀⠀⣸⡏⠀⢸⣗⠀⠀⠀⣴⣶⢰⣿⠀⠀⠀⢿⣧⠀⠀⢀⡀⣤⣼⣿⠀⠀⣿⣿⣿⣿⣿⣿⣿⡿⣟⣷⣻⢾⣽⣻⢿⡿
⠀⣾⣿⡏⣿⡇⠀⠀⠀⣿⡄⠀⠀⢸⣿⠀⣴⡆⠀⢰⣿⠁⠀⢼⡯⠀⠀⠀⣿⣿⣿⡟⠀⠀⠀⠘⣿⣴⡾⠿⢷⣿⣿⣿⠁⠠⣿⣿⣿⣿⣿⣿⣿⣿⣽⢾⣽⣻⢾⡽⣯⣟
⠀⣿⣿⠃⢿⣇⠀⠀⠀⣿⡆⠀⠀⢸⣿⣼⢿⣷⣴⣿⣃⣀⣀⢻⡷⠀⠀⠀⣿⠟⠟⢀⣤⣶⣶⣾⣿⣿⣶⣶⣾⣿⣼⣿⠆⠀⠙⣿⣿⣿⣿⣿⣿⣿⣿⣿⡾⣽⢯⣟⡷⣯
⠐⣿⣏⠀⠸⣿⡄⠀⠀⢹⣿⠀⠀⠘⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡷⠿⠻⠛⠟⠀⠀⠈⠋⣻⣿⣿⡟⢻⣿⣿⡇⠁⠰⣿⡅⠀⣸⣿⣿⣿⣿⣿⣿⣻⣿⣿⣿⣿⣟⡾⣽⣻
⠠⣿⡇⠀⢀⣿⣧⠀⠀⠘⣿⡄⠀⠀⢻⣏⠀⢸⣿⡿⠯⠈⠻⢿⡇⠀⠀⠀⠀⠀⠀⠀⠀⢸⣿⡋⠁⠈⣉⣹⠇⠀⢈⣿⠇⠀⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣟⣿⣿⣿⣷⣿
⠀⣿⡇⣠⣾⣿⣿⠁⠀⠀⣿⣧⠀⣴⣶⣿⡆⠀⠻⠷⡤⠴⠤⠾⠏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠙⠩⠉⠉⠀⢀⣠⣾⣏⡀⢠⣿⡏⣿⣿⣿⣿⣿⡿⣽⢾⣽⣿⣿⣿⣿⣿
⠀⠙⣱⣿⣿⢿⣿⠁⠀⠀⣸⣿⣧⣿⡏⣿⡟⠀⢀⠀⡄⡈⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠂⠀⢀⣰⣶⣿⣿⣿⣿⣷⣾⣿⠁⠈⠋⠀⢸⣿⡿⣽⣿⣿⣿⣿⣿⣿⣿
⠀⣼⣿⡿⣽⣻⣿⣾⣿⣷⣼⣿⡀⠉⠀⠘⠿⣦⣅⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⣀⣤⣶⡾⠟⠋⠁⠙⠋⢀⣿⡿⠛⠃⠀⠀⠀⠀⣸⣿⣿⠟⠉⠛⢿⠿⡟⠛⠁
⣼⣿⣿⣽⣷⣿⣿⣿⣿⣿⠛⢿⣷⡀⠀⠀⠀⣿⡟⠛⠛⠻⠟⢿⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣶⣤⣤⣀⠀⠀⢸⡿⠀⠀⠀⠀⠀⠀⠀⣾⡟⠁⠀⠀⠀⠀⠀⠀⠀⠀
⢺⣿⣿⣿⣿⣿⠛⡟⣿⣿⡅⠀⠛⣷⠂⠀⠀⢸⣧⠀⠀⣴⣾⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡇⠀⠉⠙⢻⣷⣦⣿⡇⠀⠀⠀⠀⠀⠀⠀⣿⡇⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠈⠙⠙⠿⡿⠁⠀⠀⣼⣿⠀⠀⠀⣾⡄⠀⣠⣼⣿⣷⣾⠟⠋⠀⠙⠿⣿⣿⣿⣍⣉⣥⣿⣿⣋⠀⠀⠀⠀⠀⠈⣿⡟⠀⠀⠀⠀⠀⣿⣄⢀⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣾⡇⠀⠀⢸⡿⠂⠀⠟⠻⢿⠛⠁⠀⠀⠀⣀⣴⣿⣿⣿⣯⣙⣿⣿⣿⠛⠿⡆⠀⠀⣀⣴⣿⣴⣦⠀⠀⠀⣼⠟⠛⠿⠟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣿⣇⣀⠀⠸⠇⠀⠠⠈⢀⠸⠛⠻⠿⠟⠛⠿⠻⠻⠿⠋⠉⠛⠉⠛⠃⡀⠄⢂⠀⠅⠀⡙⠋⠀⡀⠀⠑⠂⠀⠉⡐⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⣿⣿⠿⠠⠂⣈⠀⢰⢠⠈⠠⢑⠂⠀⡂⢀⡀⠐⠀⠀⠂⢆⠤⢄⠂⠀⢀⠠⠈⠁⠀⠀⠀⠀⠡⠄⠁⠁⠀⠉⠀⡁⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⢻⡟⠀⡀⠆⠀⡁⢰⢰⠠⢃⣀⠃⠅⠀⡇⠀⠇⠁⠠⠠⡄⡐⡀⠀⠀⢠⢸⠀⢀⠀⡢⠂⠀⡠⠀⠃⠇⡀⢀⠐⠔⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠈⠠⠡⠐⠘⠀⠑⠒⠂⠁⠀⠣⠃⠀⠀⠠⠅⠁⠐⠌⠀⠑⠃⠈⠂⠈⠒⠒⠒⠂⠀⠉⠀⠉⠁⠀⠈⠀⠈⠁⠊⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀
*/
#pragma GCC optimize("O3")
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#define ll long long int
#define MOD 1000000007
#define pii pair<int,int>
#define pll pair<ll,ll>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

int main() {
	FASTIO;
	int _;cin>>_;
	cin.ignore();
	while(_--){
		string s;
		getline(cin, s);
		int cnt[27];
		memset(cnt, 0, sizeof cnt);
		for(int i=0;i<s.length();i++){
			s[i] = tolower(s[i]);
			cnt[s[i]-'a']++;
		}
		vector<char> ans;
		for(int i=0;i<26;i++){
			if(cnt[i] == 0) ans.push_back(i+'a');
		}
		if(ans.size()==0) cout<<"pangram\n";
		else{
			cout<<"missing ";
			for(auto e: ans) cout<<e;
			cout<<'\n';
		}
	}
}