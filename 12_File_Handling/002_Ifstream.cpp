#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ifstream in;
    string st,st1;

    in.open("readfile_Ifstream.cpp");

    in>>st>>st1;
    cout<<st<<st1<<endl;
    in.close();
    return 0;
}