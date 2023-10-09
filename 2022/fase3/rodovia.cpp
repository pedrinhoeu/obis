#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m;
const ll N = 2e5+10;
bool visi[N];
vector<ll> adj[N];

ll dfs(ll v){
    if(visi[v]) return -1;
    visi[v] = true;
    queue<pair<ll, ll>> pq;
    pq.push({v, 0});
    while(!pq.empty()){
        ll V = pq.front().first, d = pq.front().second;
        pq.pop();
        if(d > 1) return V;
        for (auto i: adj[V])if(!visi[i]){
            pq.push({i, d+1});
            visi[i] = true;
        }
        
    }
    return -1;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin >> n >> m;
    for (int i = 0; i < m; i++){
        ll v, u;
        cin >> v >> u;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }
    for (int i = 1; i <= n; i++){
        if(adj[i].size() == 1){
            ll temp = dfs(i);
            if(temp != -1){
                cout << i << " " << temp << "\n";
                return 0;
            }
        }
        
    }
    for (int i = 1; i <= n; i++){
        ll temp = dfs(i);
        if(temp != -1){
            cout << i << " " << temp << "\n";
            return 0;
        }
    }
    cout << -1 << "\n";
}