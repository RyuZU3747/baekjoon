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

int main(){
    FASTIO;
    int _;cin>>_;
    while(_--){
        int r,c;cin>>r>>c;
        if(r==c) cout<<"dohoon\n";
        else{
            cout<<"jinseo\n";
            cout<<min(r,c)<<' '<<min(r,c)<<'\n';
        }
    }
}