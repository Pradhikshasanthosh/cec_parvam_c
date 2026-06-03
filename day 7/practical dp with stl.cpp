#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <map>
#include <numeric>
using namespace std;

int main() {
    // Student grades data
    vector<pair<string, int>> grades = {
        {"Arjun", 85},
        {"Priya", 92},
        {"Rahul", 78},
        {"Sneha", 95},
        {"Vikram", 88},
        {"Ananya", 76},
        {"Kiran", 90}
    };
    
    cout << "=== Grade Report ===" << endl;
    cout << "All students:" << endl;
    for (const auto& student : grades) {
        cout << "  " << student.first << ": " << student.second << endl;
    }
    
    // Sort by grade (descending)
    sort(grades.begin(), grades.end(), 
         [](const auto& a, const auto& b) {
             return a.second > b.second;
         });
    
    cout << "\nRanking (by score):" << endl;
    int rank = 1;
    for (const auto& student : grades) {
        cout << "  " << rank++ << ". " << student.first << " (" << student.second << ")" << endl;
    }
    
    // Calculate statistics
    vector<int> scores;
    for (const auto& s : grades) scores.push_back(s.second);
    
    double avg = accumulate(scores.begin(), scores.end(), 0.0) / scores.size();
    auto minmax = minmax_element(scores.begin(), scores.end());
    
    cout << "\nStatistics:" << endl;
    cout << "  Average: " << avg << endl;
    cout << "  Highest: " << *minmax.second << " (" << grades.front().first << ")" << endl;
    cout << "  Lowest: " << *minmax.first << " (" << grades.back().first << ")" << endl;
    
    // Grade distribution
    map<char, int> distribution;
    for (int s : scores) {
        if (s >= 90) distribution['A']++;
        else if (s >= 80) distribution['B']++;
        else if (s >= 70) distribution['C']++;
        else distribution['D']++;
    }
    
    cout << "\nGrade Distribution:" << endl;
    for (const auto& kv : distribution) {
        cout << "  " << kv.first << ": " << kv.second << " student(s)" << endl;
    }
    
    return 0;
}