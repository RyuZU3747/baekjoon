#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
using namespace std;
//cin.tie(0);
//ios_base::sync_with_stdio(0);
/*------------------------------------------------------------*/
using cpd = complex<double>;
const double PI = acos(-1);

void fft(vector<cpd> &v, cpd twd){
    int n = v.size();
    if(n==1) return;
    //even odd 구분
    vector<cpd> even(n/2);
    vector<cpd> odd(n/2);
    for(int i=0;i<n;i++){
        if(i&1) odd[i/2] = v[i];
        else even[i/2] = v[i]; 
    }

    fft(even, twd*twd);//분할정복
    fft(odd, twd*twd);
    cpd twdk(1,0);
    for(int i=0;i<n/2;i++){//복구
        v[i] = even[i] + twdk * odd[i];
        v[i+n/2] = even[i] - twdk * odd[i];
        twdk *= twd;
    }
}

vector<int> multi(const vector<int> &a, const vector<int> &b){
    vector<cpd> ffta(a.begin(), a.end());
    vector<cpd> fftb(b.begin(), b.end());
    int n = 1;
    while(n <= (int) max(ffta.size(), fftb.size())) n = n<<1;
    n = n<<1;
    ffta.resize(n);
    fftb.resize(n); //2의제곱0초기화

    cpd twd(cos(2*PI/n), -sin(2*PI/n));
    fft(ffta, twd);//변환할 벡터랑 twiddle
    fft(fftb, twd);

    for(int i=0;i<n;i++) ffta[i] *= fftb[i]; //곱하기

    fft(ffta,conj(twd)); //역변환
    for(int i=0;i<n;i++) ffta[i] /= n;//시그마 밖 1/N

    vector<int> ret(n);
    for(int i=0;i<n;i++){
        ret[i] = round(ffta[i].real()); //복소수를 int로
    }

    return ret;
}

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    string a,b;
    cin>>a>>b;
    vector<int> newa;
    vector<int> newb;
    if(a.compare("0")==0||b.compare("0")==0){
        cout<<0;
        return 0;
    }
    for(int i=0;i<a.length();i++){
        newa.push_back(a[a.length()-i-1]-'0');
    }
    for(int i=0;i<b.length();i++){
        newb.push_back(b[b.length()-1-i]-'0');
    }
    newa = multi(newa,newb);
    int flag = 1;
    for(int i=0;i<newa.size()-2;i++){
        if(newa[i]>9){
            newa[i+1] += newa[i]/10;
            newa[i] %= 10;
        }
    }
    for(int i=newa.size()-1;i>=0;i--){
        if(newa[i]==0&&flag == 1) continue;
        if(newa[i]!=0) flag = 0;
        cout<<newa[i];
    }
}