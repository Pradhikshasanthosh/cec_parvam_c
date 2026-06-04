#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
int main(){
    ofstream outfile("studennts.txt");
    if(outfile.is_open())
    {
        outfile<<left<<setw(20)<<"Name"<<setw(10)<<"Id"<<setw(10)<<"cgpa"<<endl;
        outfile<<string(40,'-')<<endl; // Separator line
        outfile<<left<<setw(20)<<"Alice"<<setw(10)<<20<<setw(10)<<fixed<<setprecision(2)<<3.8<<endl;
        outfile<<left<<setw(20)<<"Bob"<<setw(10)<<22<<setw(10)<<fixed<<setprecision(2)<<3.6<<endl;
        outfile.close();
    }
    ifstream infile("students.txt");
    string line;
    if(infile.is_open())
    {
    cout<<"===students records==="<<endl;
    while(getline(infile,line))
    {
        cout<<line<<endl;
    }
    infile.close();
    }
    ifstream numfile("numbers.txt");
    int sum=0,num;
    ofstream createNum("numbers.txt");
    createNum<<10<<""<<20<<""<<30<<""<<40<<""<<50<<endl;
    createNum.close();
    numfile.open("numbers.txt");
    while(numfile>>num)
    {
        sum+=num;
    }
    cout<<"Sum of numbers: "<<sum<<endl;
    numfile.close();
    return 0;
}