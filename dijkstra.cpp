#include <iostream>
#include <vector>
#include <queue>
#include <limits.h>

using namespace std;

typedef pair<int, int> pii;

vector<vector<pii>> graph; // adjacency list graph

string dijkstra(int start, int end) {
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
        return "Tidak ada rute dari " + to_string(start) + " ke " + to_string(end) + "\n";
    } else {
        string result = "Rute terpendek dari " + to_string(start) + " ke " + to_string(end) + ": ";
        int curr = end;
        vector<int> path;
        while (curr != -1) {
            path.push_back(curr);
            curr = prev[curr];
        }
        for (int i = path.size() - 1; i >= 0; i--) {
            result += to_string(path[i]);
            if(i > 0){
                result += " -> ";
            }
        }
        result += "\nTotal jarak terpendek: " + to_string(dist[end]) + " meter\n";
        return result;
    }
}

int main(int argc, char* argv[]) {
// inisiasi graph
    graph.resize(29);
    graph[0].push_back(make_pair(1, 170)); 
    graph[1].push_back(make_pair(2, 190));
    graph[2].push_back(make_pair(3, 250));
    graph[3].push_back(make_pair(4, 66));
    graph[4].push_back(make_pair(5, 160));
    graph[5].push_back(make_pair(6, 97));
    graph[6].push_back(make_pair(7, 99));
    graph[7].push_back(make_pair(9, 94));
    graph[8].push_back(make_pair(7, 170));
    graph[9].push_back(make_pair(10, 117));
    graph[10].push_back(make_pair(11, 120));
    graph[11].push_back(make_pair(12, 170));
    graph[4].push_back(make_pair(13, 180));
    graph[13].push_back(make_pair(14, 170));
    graph[14].push_back(make_pair(15, 120));
    graph[12].push_back(make_pair(15, 379));
    graph[11].push_back(make_pair(27, 110));
    graph[28].push_back(make_pair(27, 548));
    graph[27].push_back(make_pair(16, 113));
    graph[16].push_back(make_pair(17, 276));
    graph[15].push_back(make_pair(17, 280));
    graph[17].push_back(make_pair(18, 180));
    graph[18].push_back(make_pair(19, 170));
    graph[20].push_back(make_pair(17, 110));
    graph[17].push_back(make_pair(21, 190));
    graph[19].push_back(make_pair(21, 110));
    graph[21].push_back(make_pair(22, 120));
    graph[22].push_back(make_pair(23, 210));
    graph[23].push_back(make_pair(24, 130));
    graph[24].push_back(make_pair(25, 800));
    graph[25].push_back(make_pair(26, 350));
    graph[26].push_back(make_pair(1, 120));

    //graph balikannya
    graph[1].push_back(make_pair(0, 170)); 
    graph[2].push_back(make_pair(1, 190));
    graph[3].push_back(make_pair(2, 250));
    graph[4].push_back(make_pair(3, 66));
    graph[5].push_back(make_pair(4, 160));
    graph[6].push_back(make_pair(5, 97));
    graph[7].push_back(make_pair(6, 99));
    graph[7].push_back(make_pair(8, 170));
    graph[9].push_back(make_pair(7, 94));
    graph[10].push_back(make_pair(9, 117));
    graph[11].push_back(make_pair(10, 120));
    graph[12].push_back(make_pair(11, 170));
    graph[13].push_back(make_pair(4, 180));
    graph[14].push_back(make_pair(13, 170));
    graph[15].push_back(make_pair(14, 120));
    graph[15].push_back(make_pair(12, 379));
    graph[27].push_back(make_pair(11, 110));
    graph[27].push_back(make_pair(28, 548));
    graph[16].push_back(make_pair(27, 113));
    graph[17].push_back(make_pair(16, 276));
    graph[17].push_back(make_pair(15, 280));
    graph[18].push_back(make_pair(17, 180));
    graph[19].push_back(make_pair(18, 170));
    graph[17].push_back(make_pair(20, 110));
    graph[21].push_back(make_pair(17, 190));
    graph[21].push_back(make_pair(19, 110));
    graph[22].push_back(make_pair(21, 120));
    graph[23].push_back(make_pair(22, 210));
    graph[24].push_back(make_pair(23, 130));
    graph[25].push_back(make_pair(24, 800));
    graph[26].push_back(make_pair(25, 350));
    graph[1].push_back(make_pair(26, 120));
    
    if (argc < 3) {
        cout << "Please provide start and end nodes as command line arguments.\n";
        return 1;
    }

    int start = stoi(argv[1]);
    int end = stoi(argv[2]);
    cout << dijkstra(start, end);

    return 0;
    
    return 0;
}
