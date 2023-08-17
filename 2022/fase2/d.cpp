#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

const int INF = INT_MAX;

int main() {
    int V, E;
    cout << "Digite o número de vértices e arestas: ";
    cin >> V >> E;

    vector<vector<pair<int, int>>> adj(V); // Lista de adjacência: (vértice destino, peso)

    cout << "Digite as arestas no formato (origem, destino, peso):" << endl;
    for (int i = 0; i < E; ++i) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w); // Se o grafo é não direcionado
    }

    int src;
    cout << "Digite o vértice de origem: ";
    cin >> src;

    vector<int> dist(V, INF);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; // Min-heap

    dist[src] = 0;
    pq.emplace(0, src);

    while (!pq.empty()) {
        int u = pq.top().second;
        int d = pq.top().first;
        pq.pop();

        if (d > dist[u]) continue;

        for (const auto& edge : adj[u]) {
            int v = edge.first;
            int w = edge.second;

            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.emplace(dist[v], v);
            }
        }
    }

    cout << "Distâncias mínimas a partir do vértice " << src << ":" << endl;
    for (int i = 0; i < V; ++i) {
        cout << "Para o vértice " << i << ": " << dist[i] << endl;
    }

    return 0;
}
