#include <bits/stdc++.h>
using  namespace std;
using ll =long long ;
#define AUTHOR 'Manisha0369'


void solve(){
    int n;cin>>n;
    vector<vector<int >> aj(n+1);
    for(int i=0;i<n-1;i++){
        int a,b;cin>>a>>b;
        aj[a].push_back(b);
        aj[b].push_back(a);
    }
    vector<int > pnt(n+1,-1), ord;
     ord.reserve(n);
 stack<int> st;

 st.push(1);
 pnt[1]=0;
 while(!st.empty()){
      int v=st.top();
      st.pop();
      ord.push_back(v);

      for(int u: aj[v]){
        if(u==pnt[v]) continue;
        pnt[u]=v;
        st.push(u);
      }
 }
 vector<int > dp0(n+1), dp1(n+1);
 for(int i=n-1;i>=0;i--){
    int c=ord[i];
    int bs=0;
    for(int u: aj[c]){
        if(u==pnt[c]) continue;
        bs+=dp0[u];

    }
    dp1[c]=bs;
    int gn=0;
    for(int u: aj[c]){
        if(u== pnt[c]) continue;
        gn=max(gn,1+dp1[u]-dp0[u]);
    }
    dp0[c]=bs+gn;
 }
 cout<<dp0[1]<<"\n";
 
}
 


int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
     

    
        solve();
     
     return 0;
}
