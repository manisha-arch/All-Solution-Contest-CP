#include  <bits/stdc++.h>
using namespace std;
//written by Manisha0369
//code for CSES
const int MOD=1e9+7;
void solve(){
int n;cin>>n;
    // int way=0;
     vector<int > dp(n+1,0);
     dp[0]=1;
     for(int i=1;i<=n;i++){
        for(int j=1;j<=6;j++){
            if(i-j>=0){
                dp[i]=(dp[i]+dp[i-j])%MOD;
            }
        }
     }
     cout<<dp[n]<<"\n";


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
      
    solve();

    return 0;
}