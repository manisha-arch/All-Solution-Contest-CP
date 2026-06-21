#include <bits/stdc++.h>

using namespace std;
using ll=long long ;
#define AUTHOR 'GrimFace'

//written by GrimFace 
//code for D

const ll INF = (1LL << 62);

struct Ede {
    int to;
    ll w;
};

void solve() {
    int N, M;
    ll Y;
    cin >> N >> M >> Y;
 vector<vector<Ede>> g(N + 2);
    int hub = N + 1;

    for (int i = 0; i < M; i++) {
        int u, v;
        ll t;
        cin >> u >> v >> t;
        g[u].push_back({v, t});
        g[v].push_back({u, t});
    }

    vector<ll> X(N + 1);
    for (int i = 1; i <= N; i++) cin >> X[i];
     for (int i = 1; i <= N; i++) {
        g[i].push_back({hub, X[i]});
        g[hub].push_back({i, X[i] + Y});
    }

    vector<ll> dist(N + 2, INF);
    priority_queue<pair<ll, int>,
                   vector<pair<ll, int>>,
                   greater<pair<ll, int>>> pq;
 dist[1] = 0;
    pq.push({0, 1});

    while (!pq.empty()) {
        auto [d, v] = pq.top();
        pq.pop();

        if (d != dist[v]) continue;

        for (auto [to, w] : g[v]) {
            if (dist[to] > d + w) {
                dist[to] = d + w;
                pq.push({dist[to], to});
            }
        }
    }

    for (int i = 2; i <= N; i++) {
        if (i > 2) cout << ' ';
        cout << dist[i];
    }
    cout << "\n";
}

int main() {
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
  
    
    
    return 0;
}