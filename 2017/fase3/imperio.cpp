#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll N=(1e5)+10, n, resp = 1e9;

vector<ll> filhos(N);
vector<vector<ll>> adj(N);

void dfs(ll v, ll p){
    filhos[v] = 1;
    for (auto ch: adj[v]) if(ch != p){
        dfs(ch, v);
        filhos[v] += filhos[ch];
    }
}
void prin(){
    for (auto i: filhos){
        cout << i << " ";       
    }
    cout << "\n";
}
void busc(ll v, ll p, ll qnt){
    ll total = 1;
    for(auto ch: adj[v])if(ch != p)total += filhos[ch];
    resp = min(resp, abs((total - qnt)));
    for(auto ch: adj[v])if(ch != p){
        busc(ch, v, qnt + total - filhos[ch]);
    }
}


int main(){
    cin.tie(0)->sync_with_stdio(0);
    cin >> n;
    for (int i = 1; i < n; i++){
        ll u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 0);
    busc(1, 0, 0);
    cout << resp << "\n";
}