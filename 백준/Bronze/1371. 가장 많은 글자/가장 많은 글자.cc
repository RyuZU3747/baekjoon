#include <bits/stdc++.h>
#define Max(a, b) ((a) > (b) ? (a) : (b))
#define Min(a, b) ((a) < (b) ? (a) : (b))
#define ll unsigned long long
using namespace std;

int cnt[27];
int main(){
  char s[2510];
int mx=0;

  while(scanf(" %s",s)!=EOF){
   int len = strlen(s);
    for(int i=0;i<len;i++){
      if(s[i]!=' '){
  cnt[s[i]-'a']++;
        }
    }
    }
for(int i=0;i<27;i++){
  mx=Max(mx,cnt[i]);
  }
for(int i=0;i<27;i++){

  if(mx==cnt[i]) printf("%c",i+'a');
}

}