#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;cin>>s;
    int a=-1,b=-1;
    set<char> m;
    m.insert('a');
    m.insert('e');
    m.insert('o');
    m.insert('i');
    m.insert('u');

    
    for(int i=s.length();i>=0;i--){
        if(m.count(s[i])){
            if(a==-1)
            a=i+1;
            else{
                b=i+1;
                break;
            }
        }
    }
    if(m.count(s.back())||s.back()=='n'||s.back()=='s')
        cout<<b;
    else cout<<a;
}