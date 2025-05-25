#include <iostream>
#include <vector>
#include <unordered_map>
#include <cmath>

using namespace std;

void pageRank(const vector<vector<int>>& graph, int iterations = 100, double damping = 0.85) {
    int n = graph.size();
    vector<double> rank(n, 1.0 / n);

    for (int iter = 0; iter < iterations; ++iter) {
        vector<double> newRank(n, 0.0);

        for (int i = 0; i < n; ++i) {
            for (int neighbor : graph[i]) {
                newRank[neighbor] += rank[i] / graph[i].size();
            }
        }

        for (int i = 0; i < n; ++i) {
            rank[i] = (1 - damping) / n + damping * newRank[i];
        }
    }

    cout << "PageRank Scores:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Node " << i << ": " << rank[i] << endl;
    }
}

int main() {
    vector<vector<int>> graph = {
        {1, 2},
        {2},       // Node 1 links to 2
        {0}        // Node 2 links back to 0
    };

    pageRank(graph);
    return 0;
}
