#include  <bits/stdc++.h>
using namespace std;
//written by Manisha0369
//code for CSES
const int MOD=1e9+7;
const int INF=1e9;
void solve(){
int n,x;cin>>n>>x;
vector<int> a(n);
for(int &i :a)cin>>i;
     vector<int> sp(x+1,INF);
     sp[0]=0;
     for(int i=1;i<=x;i++){
        for(int j:a){
            if(i>=j){
            sp[i]= min(sp[i],sp[i-j]+1);
            }
        }
     }
   cout<<(sp[x]==INF ?-1: sp[x])<<"\n";
    


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
      
    solve();

    return 0;
}