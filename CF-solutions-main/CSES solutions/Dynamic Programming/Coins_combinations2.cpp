#include  <bits/stdc++.h>

using namespace std;
//written by Manisha0369
//code for CSES
using ll= long long ;
const int MOD=1e9+7;
const int INF=1e9;
void solve(){
int n,x;cin>>n>>x;
       vector<int> a(n);
for( int i=0;i<n;i++) cin>>a[i];
       vector<ll> dp(x+1,0);
       dp[0]=1;
       for(int i=1;i<=x;i++){
        for(int j:a){
            if(i>=j){
                dp[i]=(dp[i]+dp[i-j])%MOD;
            }
        }

       }
       cout<<dp[x]<<"\n";
    


}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
      
    solve();

    return 0;
}