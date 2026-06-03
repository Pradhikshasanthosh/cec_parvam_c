#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int age;
    student(const string &n, int a) : name(n), age(a) {}
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
    }
};
int main(){
    student* s1 = new student("arjun", 20); // Dynamically allocate a student object on the heap and store its address in 's'.
    cout<<"name: "<<s1->name<<endl; // Output the name of the student using the pointer 's'.
    cout<<"age: "<<s1->age<<endl; // Output the age of the student
    s1->display();
    (*s1).display(); // Call the display method to output the student's information.
    delete s1; // Deallocate the memory for the student object to prevent memory leaks.
    return 0;
}