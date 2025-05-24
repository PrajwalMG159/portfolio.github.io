#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

struct Job {
    string title;
    string company;
    vector<string> skills;
};

int main() {
    unordered_map<string, vector<Job>> jobTable;
    Job job1 = {"Software Engineer", "TechCorp", {"C++", "Algorithms", "Data Structures"}};
    jobTable["Software Engineer"].push_back(job1);
    Job job2 = {"Frontend Developer", "Resors", {"React", "NodeJS", "ExpressJS"}};
        jobTable["Frontend Developer"].push_back(job2);

    // Searching for a job
    string searchKeyword = "Software Engineer";
    if (jobTable.find(searchKeyword) != jobTable.end()) {
        for (const auto& job : jobTable[searchKeyword]) {
            cout << "Title: " << job.title << ", Company: " << job.company << "\n";
        }
    } else {
        cout << "No jobs found for " << searchKeyword << "\n";
    }
    return 0;
}
