#include <bits/stdc++.h>

using namespace std;
using ll=long long ;
#define AUTHOR 'GrimFace'

//written by GrimFace 
//code for D

struct In {
    ll l, r;
};

int N, K;
vector<In> a;

bool can(ll d) {
    int cnt = 0;
    ll ne = -(1LL << 60); 

    for (auto [l, r] : a) {
        if (l >= ne) {
            cnt++;
            ne = r + d;
            if (cnt >= K) return true;
        }
    }
    return false;
}

void solve() {
    cin >> N >> K;

    a.resize(N);
    for (int i = 0; i < N; i++) {
        cin >> a[i].l >> a[i].r;
    }

    sort(a.begin(), a.end(), [](const In& A, const In& B) {
        if (A.r != B.r) return A.r < B.r;
        return A.l < B.l;
    });

    
    if (!can(1)) {
        cout << -1 << "\n";
        return;
    }

    ll lo = 1, hi = 1000000001LL; 

    while (lo + 1 < hi) {
        ll mid = (lo + hi) / 2;
        if (can(mid))
            lo = mid;
        else
            hi = mid;
    }

    cout << lo << "\n";
}




int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
  
    
    
    return 0;
}