#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream file("nonexistent.txt");
    if(!file)
    {
        cout<<"Error: Could not open the file."<<endl;
    }
    if(file.fail())
    {
        cout<<"Failed to open the file."<<endl;
    }
    if(file.is_open())
    {
        cout<<"File opened successfully."<<endl;
        file.close();
    }
    ifstream file2("example.txt");
    if(file2.good())
    {
        cout<<"File is in good state."<<endl;
    }
    else
    {
        cout<<"File is not in good state."<<endl;
    }
    return 0;
};