#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> vec = {40, 10, 30, 20, 50};
    
    // Getting iterators
    auto it_begin = vec.begin();   // Points to first element
    auto it_end = vec.end();       // Points to one-past-last
    
    // Iterator traversal
    cout << "Forward: ";
    for (auto it = vec.begin(); it != vec.end(); ++it) {
        cout << *it << " ";  // Dereference iterator like a pointer
    }
    cout << endl;
    
    // Reverse traversal
    cout << "Reverse: ";
    for (auto it = vec.rbegin(); it != vec.rend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    
    // Range-based for loop (uses iterators internally)
    cout << "Range-for: ";
    for (int x : vec) {
        cout << x << " ";
    }
    cout << endl;
    
    return 0;
}