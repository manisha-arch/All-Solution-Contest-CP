#include <bits/stdc++.h>

using namespace std;
using ll=long long ;
#define AUTHOR 'GrimFace'

//written by GrimFace 
//code for C

void solve(){
    int N;
    cin >> N;

    vector<int> H(N), L(N);
    for (int i = 0; i < N; i++) {
        cin >> H[i] >> L[i];
    }

    vector<int> suf(N);
    suf[N - 1] = H[N - 1];
    for (int i = N - 2; i >= 0; i--) {
        suf[i] = max(suf[i + 1], H[i]);
    }

    int Q;
    cin >> Q;

    while (Q--) {
        int T;
        cin >> T;

        int pos = upper_bound(L.begin(), L.end(), T) - L.begin();
        cout << suf[pos] << "\n";
    }
}



int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
  
    
    
    return 0;
}