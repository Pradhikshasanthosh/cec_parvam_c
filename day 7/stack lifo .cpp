#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    
    // Push elements
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);  // Top element
    
    cout << "Stack size: " << s.size() << endl;
    cout << "Top element: " << s.top() << endl;  // 40
    
    cout << "Popping all elements: ";
    while (!s.empty()) {
        cout << s.top() << " ";  // View top
        s.pop();                  // Remove top
    }
    cout << endl;
    
    // Stack is now empty
    cout << "Is empty? " << (s.empty() ? "Yes" : "No") << endl;
    
    return 0;
}