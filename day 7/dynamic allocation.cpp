#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of the array: ";
    cin>>size;
    int* arr = new int[size]; // Dynamically allocate an array of integers on the heap and store its address in 'arr'.
    for(int i=0; i<size; i++){
        arr[i] = (i+1)*10; 
    }
    cout<<"Array elements: ";
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" "; // Output each element of the array followed by a space.
    }
    cout<<endl;
    delete[] arr; // Deallocate the memory for the array to prevent memory leaks.
    arr = nullptr; // Set the pointer to nullptr to avoid dangling pointer issues.
    return 0;
}