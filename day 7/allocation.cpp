#include<iostream>
using namespace std;
int main(){
    int *p = new int; // Dynamically allocate an integer on the heap and store its address in 'ptr'.
    *p = 42; // Assign the value 42 to the memory location pointed to
    cout << "Value: " << *p << endl; // Output the value stored at the memory location (42).
    delete p; // Deallocate the memory to prevent memory leaks.
    p = nullptr;
    int* q = new int[5]; // Dynamically allocate an array of 5 integers on the heap and store its address in 'q'.
    cout<<"value: "<<q<<endl; // Output the value of the first element in the array (default-initialized to 0).
    delete q; 
    return 0;
}