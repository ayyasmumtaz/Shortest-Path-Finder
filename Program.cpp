#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>

using namespace std;

typedef pair<int, int> pii;

vector<vector<pii>> graph; // adjacency list graph

void dijkstra(int start, int end) {
    int n = graph.size();
    vector<int> dist(n, INT_MAX);
    vector<int> prev(n, -1);
    vector<bool> visited(n, false);
    priority_queue<pii, vector<pii>, greater<pii>> pq;

    dist[start] = 0;
    pq.push(make_pair(0, start));

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if (visited[u]) continue;
        visited[u] = true;

        for (auto edge : graph[u]) {
            int v = edge.first;
            int weight = edge.second;

            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                prev[v] = u;
                pq.push(make_pair(dist[v], v));
            }
        }
    }

    if (dist[end] == INT_MAX) {
        cout << "Tidak ada rute dari " << start << " ke " << end << "\n";
    } else {
        cout << "Rute terpendek dari " << start << " ke " << end << ": ";
        int curr = end;
        vector<int> path;
        while (curr != -1) {
            path.push_back(curr);
            curr = prev[curr];
        }
        for (int i = path.size() - 1; i >= 0; i--) {
            cout << path[i];
            if(i > 0){
                cout << " -> ";
            }
        }
        cout << "\nTotal jarak terpendek: " << dist[end] << "\n";
    }
}

int main() {
    // initialize graph
    graph.resize(6);
    graph[0].push_back(make_pair(1, 5)); // edge from node 0 to node 1 with weight 5
    graph[0].push_back(make_pair(3, 2)); // edge from node 0 to node 3 with weight 2
    graph[1].push_back(make_pair(0, 5)); // edge from node 1 to node 0 with weight 5
    graph[1].push_back(make_pair(2, 3)); // edge from node 1 to node 2 with weight 3
    graph[1].push_back(make_pair(3, 3)); // edge from node 1 to node 3 with weight 3
    graph[1].push_back(make_pair(4, 1)); // edge from node 1 to node 4 with weight 1
    graph[2].push_back(make_pair(1, 3)); // edge from node 2 to node 1 with weight 3
    graph[2].push_back(make_pair(4, 5)); // edge from node 2 to node 4 with weight 5
    graph[3].push_back(make_pair(0, 2)); // edge from node 3 to node 0 with weight 2
    graph[3].push_back(make_pair(1, 3)); // edge from node 3 to node 1 with weight 3
    graph[3].push_back(make_pair(4, 6)); // edge from node 3 to node 4 with weight 6
    graph[4].push_back(make_pair(1, 1)); // edge from node 4 to node 1 with weight 1
    graph[4].push_back(make_pair(2, 5)); // edge from node 4 to node 2 with weight 5
    graph[4].push_back(make_pair(3, 6)); // edge from node 4 to node 3 with weight 6
    graph[4].push_back(make_pair(5, 4)); // edge from node 4 to node 5 with weight 4
    graph[5].push_back(make_pair(4, 4)); // edge from node 5 to node 4 with weight 4

    // get user input for start and end nodes
    int start, end;
    cout << "Masukkan titik awal: ";
    cin >> start;
    cout << "Masukkan titik akhir: ";
    cin >> end;

    dijkstra(start, end);

    return 0;
}
