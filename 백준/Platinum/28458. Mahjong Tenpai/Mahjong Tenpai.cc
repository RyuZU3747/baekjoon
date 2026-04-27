#include <bits/stdc++.h>
#define ll long long int
#define swap(a,b) {ll c; c=a;a=b;b=c;}
#define MOD 1000000007
#define pii pair<int,int>
#define iii tuple<int,int,int>
#define FASTIO cin.tie(0),ios_base::sync_with_stdio(0)
using namespace std;

vector<string> pai(13);
map<string, int> cnt;
set<string> ans;

void chk(int body, int head){
    if(body==4 && head==1){
        ans.insert(pai.back());
        return;
    }
    for(auto &e: cnt){
        if(e.second >= 3 && body < 4){
            e.second -= 3;
            chk(body+1, head);
            e.second += 3;
        }
        if(e.second >= 2 && head == 0){
            e.second -= 2;
            chk(body, head+1);
            e.second += 2;
        }
    }
    for(int i=1;i<=7;i++){
        for(int j=0;j<3;j++){
            string cur1 = "";
            string cur2 = "";
            string cur3 = "";
            char cat;
            if(j==0) cat = 'm';
            if(j==1) cat = 't';
            if(j==2) cat = 's';
            cur1 += i+'0';
            cur1 += cat;
            cur2 += i+1+'0';
            cur2 += cat;
            cur3 += i+2+'0';
            cur3 += cat;
            
            if(cnt[cur1] > 0 && cnt[cur2] > 0 && cnt[cur3] > 0){
                cnt[cur1]--;
                cnt[cur2]--;
                cnt[cur3]--;
                chk(body+1, head);
                cnt[cur1]++;
                cnt[cur2]++;
                cnt[cur3]++;
            }
        }
    }
}

int main(){
    for(auto &x:pai){
        cin>>x;
        cnt[x]++;
    }
    int toitsu = 0;
    for(auto e: cnt){
        if(e.second == 2) toitsu++;
    }
    if(toitsu==6){
        cout<<"tenpai\n1\n";
        for(auto e: cnt){
            if(e.second == 1) cout<<e.first;
        }
        return 0;
    }
    int kokushi = 1;
    int yogupai[13] = {0,};
    string idxtoyogu[13] = {"1m", "9m", "1t", "9t", "1s", "9s", "e", "s", "w", "n", "h", "b", "j"};
    for(auto e: pai){
        if(!e.compare("1m")) yogupai[0]++;
        else if(!e.compare("9m")) yogupai[1]++;
        else if(!e.compare("1t")) yogupai[2]++;
        else if(!e.compare("9t")) yogupai[3]++;
        else if(!e.compare("1s")) yogupai[4]++;
        else if(!e.compare("9s")) yogupai[5]++;
        else if(!e.compare("e")) yogupai[6]++;
        else if(!e.compare("s")) yogupai[7]++;
        else if(!e.compare("w")) yogupai[8]++;
        else if(!e.compare("n")) yogupai[9]++;
        else if(!e.compare("h")) yogupai[10]++;
        else if(!e.compare("b")) yogupai[11]++;
        else if(!e.compare("j")) yogupai[12]++;
        else kokushi = 0;
    }
    if(kokushi){
        int zerocnt = 0;
        for(int i=0;i<13;i++){
            if(yogupai[i]==0) zerocnt++;
        }
        if(zerocnt==1){
            cout<<"tenpai\n1\n";
            for(int i=0;i<13;i++){
                if(yogupai[i]==0) cout<<idxtoyogu[i];
            }
            return 0;
        }
        else if(zerocnt==0){
            cout<<"tenpai\n13\n";
            sort(pai.begin(), pai.end());
            for(auto e:pai) cout<<e<<' ';
            return 0;
        }
    }
    
    for(int i=1;i<=9;i++){
        for(int j=0;j<3;j++){
            string add = "";
            add += i+'0';
            if(j==0) add += "m";
            if(j==1) add += "t";
            if(j==2) add += "s";
            if(cnt[add] < 4){
                pai.push_back(add);
                cnt[add]++;
                chk(0,0);
                cnt[add]--;
                pai.pop_back();
            }
        }
    }
    if(cnt["e"] < 4){
        pai.push_back("e");
        cnt["e"]++;
        chk(0,0);
        cnt["e"]--;
        pai.pop_back();
    }
    if(cnt["s"] < 4){
        pai.push_back("s");
        cnt["s"]++;
        chk(0,0);
        cnt["s"]--;
        pai.pop_back();
    }
    if(cnt["w"] < 4){
        pai.push_back("w");
        cnt["w"]++;
        chk(0,0);
        cnt["w"]--;
        pai.pop_back();
    }
    if(cnt["n"] < 4){
        pai.push_back("n");
        cnt["n"]++;
        chk(0,0);
        cnt["n"]--;
        pai.pop_back();
    }
    if(cnt["h"] < 4){
        pai.push_back("h");
        cnt["h"]++;
        chk(0,0);
        cnt["h"]--;
        pai.pop_back();
    }
    if(cnt["b"] < 4){
        pai.push_back("b");
        cnt["b"]++;
        chk(0,0);
        cnt["b"]--;
        pai.pop_back();
    }
    if(cnt["j"] < 4){
        pai.push_back("j");
        cnt["j"]++;
        chk(0,0);
        cnt["j"]--;
        pai.pop_back();
    }
    if(ans.size() == 0) cout<<"no tenpai";
    else{
        cout<<"tenpai\n";
        cout<<ans.size()<<'\n';
        for(auto e:ans) cout<<e<<' ';
    }
}