#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<string> q;
    
    // Enqueue elements
    q.push("Task 1");
    q.push("Task 2");
    q.push("Task 3");
    
    cout << "Queue size: " << q.size() << endl;
    cout << "Front: " << q.front() << endl;  // Task 1
    cout << "Back: " << q.back() << endl;    // Task 3
    
    cout << "Processing queue: ";
    while (!q.empty()) {
        cout << "[" << q.front() << "] ";  // View front
        q.pop();                            // Remove front
    }
    cout << endl;
    
    return 0;
}