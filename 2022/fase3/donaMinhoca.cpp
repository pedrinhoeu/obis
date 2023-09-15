#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<ll>> adj;
vector<ll> dist;

void dfs(ll v, ll p=0){
    ll temp = 0;
    for (auto i: adj[v])if(i != p){
        dfs(i, v);
        temp = max(temp, dist[i]);
    }
    dist[v] += temp;
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n, k;
    cin >> n >> k;
    adj.resize(n+1);
    dist.resize(n+1, 1);
    ll u, v;
    for (int i = 0; i < n-1; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    ll q;
    for(int i = 1; i <= n; i++) if(adj[i].size() == 1) q = i; 
    dfs(q);
    k = k*2 + 1;
    cout << (dist[q] + k - 1)/k << "\n";
}