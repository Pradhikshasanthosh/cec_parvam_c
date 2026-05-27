#include<iostream>
#include<cstring>
using namespace std;
class student{
    public:
    char*name;
    int age;
    student(const char*n, int a){
        name = new char[strlen(n) + 1];
        strcpy(name, n);
        age = a;
    }
    student(const student &s){
        name = new char[strlen(s.name) + 1];
        strcpy(name, s.name);
        age = s.age;
        cout << "Copy constructor called  !!" << endl;
    }
    void display(){
        cout << name << "(" << age << ")" << endl;
    }
    ~student(){
        delete[] name;
    }
};
int main() {
    student s1("Arjun", 20);
    student s2 = s1; // Copy constructor is called here
    s1.display();
    s2.display();
    s2.name[0] = 'P'; // Modifying s2's name to check if s1 is unaffected
    cout << "After modifying s2's name:" << endl;
    s1.display();
    s2.display();
    return 0;
}
