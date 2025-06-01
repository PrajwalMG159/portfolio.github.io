#include <iostream>
#include <vector>
#include <queue>
#include <unordered_map>
using namespace std;

vector<string> topologicalSort(unordered_map<string, vector<string>>& graph) {
    unordered_map<string, int> inDegree;
    queue<string> q;
    vector<string> sortedOrder;

    // Initialize in-degree counts
    for (auto& [course, dependencies] : graph) {
        for (string dep : dependencies) {
            inDegree[dep]++;
        }
    }

    // Enqueue courses with no prerequisites
    for (auto& [course, _] : graph) {
        if (inDegree[course] == 0) q.push(course);
    }

    // Process the queue
    while (!q.empty()) {
        string current = q.front();
        q.pop();
        sortedOrder.push_back(current);

        for (string neighbor : graph[current]) {
            if (--inDegree[neighbor] == 0) {
                q.push(neighbor);
            }
        }
    }

    return sortedOrder;
}

int main() {
    // Example DAG: Python -> Pandas -> ML, SQL -> Statistics
    unordered_map<string, vector<string>> skillsGraph = {
        {"Python", {"Pandas"}},
        {"Pandas", {"Machine Learning"}},
        {"SQL", {"Statistics"}},
        {"Statistics", {"Machine Learning"}},
        {"Machine Learning", {"Deep Learning"}},
        {"Deep Learning", {}},
    };

    vector<string> learningPath = topologicalSort(skillsGraph);
    cout << "Recommended Learning Path:\n";
    for (string course : learningPath) cout << course << " → ";
    cout << "END\n";

    return 0;
}
