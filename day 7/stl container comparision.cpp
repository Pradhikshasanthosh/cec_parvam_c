#include <iostream>
#include <vector>
#include <list>
#include <stack>
#include <queue>
#include <chrono>
using namespace std;

int main() {
    const int SIZE = 100000;
    
    // Vector vs List: insertion performance
    auto start = chrono::high_resolution_clock::now();
    
    vector<int> vec;
    for (int i = 0; i < SIZE; i++) {
        vec.push_back(i);   // Amortized O(1)
    }
    
    auto end = chrono::high_resolution_clock::now();
    auto vecTime = chrono::duration_cast<chrono::milliseconds>(end - start).count();
    
    start = chrono::high_resolution_clock::now();
    
    list<int> lst;
    for (int i = 0; i < SIZE; i++) {
        lst.push_back(i);   // O(1)
    }
    
    end = chrono::high_resolution_clock::now();
    auto listTime = chrono::duration_cast<chrono::milliseconds>(end - start).count();
    
    cout << "=== Performance: push_back " << SIZE << " elements ===" << endl;
    cout << "Vector: " << vecTime << " ms" << endl;
    cout << "List:   " << listTime << " ms" << endl;
    
    // Stack (LIFO) usage
    stack<int> s;
    s.push(1); s.push(2); s.push(3); s.push(4); s.push(5);
    
    cout << "\n=== Stack (LIFO) ===" << endl;
    cout << "Stack contents (top to bottom): ";
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
    cout << endl;
    
    // Queue (FIFO) usage
    queue<int> q;
    q.push(1); q.push(2); q.push(3); q.push(4); q.push(5);
    
    cout << "\n=== Queue (FIFO) ===" << endl;
    cout << "Queue contents (front to back): ";
    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
    
    return 0;
}