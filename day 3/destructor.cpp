#include<iostream>
using namespace std;
class Resource{
    private:
    int* data;
    int id;
    public:
    Resource(int i , int val):id(i){
        data = new int(val);
        cout << "Resource " << id << " acquired (value:"<<*data<<")" << endl;
    }
    ~Resource(){
        cout << "Resource " << id << " released" << endl;
        delete data;
    }
    void show(){
        cout << "Resource " << id << " : " << *data << endl;
    }
};
void function(){
    Resource local(2, 200);
    local.show();
}
int main(){
    Resource r1(1, 100);
    r1.show();
    function();
    Resource* r3 = new Resource(3, 300);
    r3->show();
    delete r3; // Manually releasing the resource
    cout << "End of main function" << endl;
    return 0;
}