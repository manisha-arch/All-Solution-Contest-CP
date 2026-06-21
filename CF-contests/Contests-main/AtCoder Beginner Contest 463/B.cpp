#include <bits/stdc++.h>

using namespace std;


//written by GrimFace 
//code for A

void solve(){
    int N;
    char X;
    cin >> N >> X;

    int col = X - 'A'; 

    for (int i = 0; i < N; i++) {
        string s;
        cin >> s;
        if (s[col] == 'o') {
            cout << "Yes\n";
            return;
        }
    }

    cout << "No\n";
}



int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
  
    
    
    return 0;
}