#include<iostream>
#include<string>
using namespace std;
template<typename T>
class Pair{
    private:
    T first;
    T second;
    public:
    Pair(T f, T s) : first(f), second(s) {}
    T getFirst() const { return first; }
    T getSecond() const { return second; }
    T getMax() const {
        return (first > second) ? first : second;
    }
    void display() const {
        cout << "First: " << first << ", Second: " << second << endl;
    }
};
template<typename T, typename U>
class keyvalue{
    private:
    T key;
    U value;
    public:
    keyvalue(T k, U v) : key(k), value(v) {}
    void display() const {
        cout << "Key: " << key << ", Value: " << value << endl;
    }
};
int main(){
    Pair<int> p1(10, 20);
    Pair<double> p2(3.5, 2.1);
    Pair<string> p3("apple", "banana");
    cout<<"int pair:"; p1.display();
    cout<<"Max " << p1.getMax() << endl;
    return 0;
    

}