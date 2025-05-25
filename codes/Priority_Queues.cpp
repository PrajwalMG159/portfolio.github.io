#include <iostream>
#include <queue>
#include <vector>

using namespace std;

struct FeedItem {
    int postId;
    double relevanceScore;

    bool operator<(const FeedItem& other) const {
        return relevanceScore < other.relevanceScore; // Max-Heap
    }
};

void rankFeed(vector<FeedItem>& posts) {
    priority_queue<FeedItem> maxHeap;

    for (const auto& post : posts) {
        maxHeap.push(post);
    }

    cout << "Ranked Feed (Highest Relevance First):\n";
    while (!maxHeap.empty()) {
        FeedItem topPost = maxHeap.top();
        maxHeap.pop();
        cout << "Post ID: " << topPost.postId
             << " | Score: " << topPost.relevanceScore << endl;
    }
}

int main() {
    vector<FeedItem> posts = {
        {101, 0.95},
        {102, 0.87},
        {103, 0.99}
    };

    rankFeed(posts);
    return 0;
}
