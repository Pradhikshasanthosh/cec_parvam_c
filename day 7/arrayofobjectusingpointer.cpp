#include<iostream>
#include<string>
using namespace std;
class product{
    private:
    string name;
    double price;
    int id;
    public:
    product() : name(""), price(0.0), id(0) {} // Default constructor to initialize member variables.
    product(const string &n, double p, int i) : name(n), price(p), id(i) {}  
    void display(){
        cout<<"Name: "<<name<<endl;
        cout<<"Price: "<<price<<endl;
        cout<<"ID: "<<id<<endl;
    }
};
int main(){
    int count;
    cout<<"Enter the number of products: "; 
    cin>>count;
    product* inventory = new product[count]; 
    for(int i=0; i<count; i++){
        inventory[i] = product("Product" + to_string(i+1), (i+1)*10.0, 100+i); 
    }
    cout<<"Product Inventory:"<<endl;
    for(int i=0; i<count; i++){
        inventory[i].display(); // Call the display method for each product in the inventory to output its information.

    }
    delete[] inventory; // Deallocate the memory for the array of products to prevent memory leaks.
    return 0;
}