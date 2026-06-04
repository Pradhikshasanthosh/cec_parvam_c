#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream outfile("example.txt");
    if(outfile.is_open())
    {
        outfile<<"Hello, file "<<endl;
        outfile<<"this is  line 2"<<endl;
        outfile<<"c++ file handling example"<<endl;
        outfile.close();
        cout<<"This file is written successfully."<<endl;
    }
    else
    {
          cout<<"Unable to open the file for writing."<<endl;
    }
ifstream infile("example.txt");
    if(infile.is_open())
    {
        string line;
        cout<<"Contents of the file:"<<endl;
        while(getline(infile,line))
        {
            cout<<line<<endl;
        }
        infile.close();
    }
    else
    {
        cout<<"Unable to open the file for reading."<<endl;
    }
    return 0;
}