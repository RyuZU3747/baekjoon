#include "combo.h"
#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 998244353
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

string guess_sequence(int N) {
    string prefix;
    char head;
	if(press("AB")>=1){
        if(press("A")==1) prefix = "A";
        else prefix = "B";
    }
    else{
        if(press("X")==1) prefix = "X";
        else prefix = "Y";
    }
    head = prefix[0];
    char add[3];
    if(head == 'A'){
        add[0] = 'B';
        add[1] = 'X';
        add[2] = 'Y';
    }
    else if(head == 'B'){
        add[0] = 'A';
        add[1] = 'X';
        add[2] = 'Y';
    }
    else if(head == 'X'){
        add[0] = 'A';
        add[1] = 'B';
        add[2] = 'Y';
    }
    else{
        add[0] = 'A';
        add[1] = 'B';
        add[2] = 'X';
    }
    int bef = 1;
    while(prefix.length() < N-1){
        int num = press(prefix+add[0]+prefix+add[1]+add[0]+prefix+add[1]+add[1]+prefix+add[1]+add[2]);
        if(num==bef) prefix += add[2];
        else if(bef+1==num) prefix += add[0];
        else prefix += add[1];
        bef = num;
    }
	if(press(prefix+add[0])==N) prefix += add[0];
    else if(press(prefix+add[1])==N) prefix += add[1];
    else prefix += add[2];
    return prefix;
}
