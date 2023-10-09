#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector<vector<ll>> adj;
vector<ll> dist;

void dfs(ll v, ll p, ll d){
    dist[v] = d;
    for (auto ch: adj[v])if(ch != p){
        dfs(ch, v, d+1);
    }
}

int main(){
    cin.tie(0)->sync_with_stdio(0);
    ll n;
    cin >> n;
    ll u, v;
    adj.resize(n+1);
    dist.resize(n+1);
    for (int i = 0; i < n-1; i++){
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1, 0, 0);
    ll p0 = 0;
    for (int i = 1; i <= n; i++) if(dist[p0] < dist[i]) p0 = i;
    dfs(p0, 0, 0);
    ll p1=0, q1=0, q2=0;
    for (int i = 1; i <= n; i++){
        if(dist[p1] < dist[i]){
            p1 = i;
            q1 = 1;
        }
        else if(dist[p1] == dist[i]){
            q1++;
        }
    }
    dfs(p1, 0, 0);
    p0 = 0;
    for (int i = 1; i <= n; i++){
        if(dist[p0] < dist[i]){
            p0 = i;
            q2 = 1;
        }
        else if(dist[p0] == dist[i]){
            q2++;
        }
    }
    cout << dist[p0]+1 << "\n" << q1*q2 << "\n";
}