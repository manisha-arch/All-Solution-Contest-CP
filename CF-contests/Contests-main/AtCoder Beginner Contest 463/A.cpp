#include <bits/stdc++.h>

using namespace std;


//written by GrimFace 
//code for A

void solve(){
     int X, Y;
    cin >> X >> Y;

    if (1LL * X * 9 == 1LL * Y * 16)
        cout << "Yes\n";
    else
        cout << "No\n";
}



int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
  
    
    
    return 0;
}