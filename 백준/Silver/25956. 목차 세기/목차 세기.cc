#include <bits/stdc++.h>
#define pii pair<int,int>
using namespace std;

int ar[1000001];
int ans[1000001];

int main(){
    int n;cin>>n;
    stack<pii> st;//idx, head
    pii parent;
    for(int i=0;i<n;i++){
        cin>>ar[i];
        if(ar[i]!=1&&st.empty()){
            cout<<-1;
            return 0;
        }
        if(ar[i]==1){
            st.push(make_pair(i,ar[i]));
            parent = make_pair(i,ar[i]);
        }
        else{
            if(st.top().second==ar[i]){
                ans[parent.first]++;
            }
            else if(st.top().second==ar[i]-1){
                parent = make_pair(st.top().first,st.top().second);
                ans[parent.first]++;
                st.push(make_pair(i,ar[i]));
            }
            else if(st.top().second<ar[i]-1){
                cout<<-1;
                return 0;
            }
            else if(st.top().second>ar[i]){
                while(st.top().second!=ar[i]) st.pop();
                if(st.top().second!=1){
                    st.pop();
                    ans[st.top().first]++;
                    st.push(make_pair(i,ar[i]));
                }
            }
        }
    }
    for(int i=0;i<n;i++) cout<<ans[i]<<'\n';
}