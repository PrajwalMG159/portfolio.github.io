#include <iostream>
#include <vector>
using namespace std;

class FenwickTree {
private:
    vector<int> tree;

public:
    FenwickTree(int size) : tree(size + 1, 0) {}

    void update(int index, int delta) {
        while (index < tree.size()) {
            tree[index] += delta;
            index += index & -index;
        }
    }

    int query(int index) {
        int sum = 0;
        while (index > 0) {
            sum += tree[index];
            index -= index & -index;
        }
        return sum;
    }

    int rangeQuery(int l, int r) {
        return query(r) - query(l - 1);
    }
};

int main() {
    // Example: Track daily likes for 30 days
    FenwickTree engagementTracker(30);

    // Day 5: 10 likes, Day 10: 15 likes, Day 15: 20 likes
    engagementTracker.update(5, 10);
    engagementTracker.update(10, 15);
    engagementTracker.update(15, 20);

    // Query total likes between Day 1 and Day 20
    int total = engagementTracker.rangeQuery(1, 20);
    cout << "Total engagement (Day 1-20): " << total << endl;  // Output: 45

    return 0;
}
